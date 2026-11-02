// rea decompile_all
// name: FUN_0045d360
// address: 0x45d360
// body: available
// range: 0x45d360-0x45d454 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045d360(int *param_1)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700971;
  local_10 = ExceptionList;
  iVar5 = 0;
  iVar4 = *param_1;
  piVar1 = param_1;
  while (iVar4 != 0) {
    piVar1 = piVar1 + 1;
    iVar5 = iVar5 + 1;
    iVar4 = *piVar1;
  }
  if (0 < iVar5) {
    iVar4 = in_ECX[2] + iVar5;
    ppvVar2 = &local_10;
    if ((in_ECX[1] < iVar4) && (uVar3 = iVar4 / 2 + 8 + iVar4 & 0xfffffff8, in_ECX[1] != uVar3)) {
      ExceptionList = &local_10;
      if ((int)uVar3 < 1) {
        FID_conflict__free((void *)*in_ECX);
        *in_ECX = 0;
      }
      else if (*in_ECX == 0) {
        iVar4 = FUN_004c554b();
        *in_ECX = iVar4;
      }
      else {
        iVar4 = FUN_004c553b(*in_ECX,uVar3 << 2,DAT_00c76070 ^ (uint)&stack0xfffffffc);
        *in_ECX = iVar4;
      }
      in_ECX[1] = uVar3;
      ppvVar2 = ExceptionList;
    }
    while (ExceptionList = ppvVar2, iVar5 = iVar5 + -1, -1 < iVar5) {
      local_8 = 0;
      if (*in_ECX + in_ECX[2] * 4 != 0) {
        FUN_0045c990(*param_1);
        param_1 = param_1 + 1;
      }
      in_ECX[2] = in_ECX[2] + 1;
      ppvVar2 = ExceptionList;
    }
  }
  ExceptionList = local_10;
  return;
}

