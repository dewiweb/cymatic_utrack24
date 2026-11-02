// rea decompile_all
// name: FUN_0045d460
// address: 0x45d460
// body: available
// range: 0x45d460-0x45d567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045d460(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  short *psVar2;
  void **ppvVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *in_ECX;
  int iVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007009a1;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (0 < param_2) {
    iVar6 = in_ECX[2] + param_2;
    ppvVar3 = &local_10;
    if (in_ECX[1] < iVar6) {
      ExceptionList = &local_10;
      FUN_00409cf0(iVar6 / 2 + iVar6 + 8 & 0xfffffff8);
      ppvVar3 = ExceptionList;
    }
    while (ExceptionList = ppvVar3, param_2 = param_2 + -1, -1 < param_2) {
      puVar1 = (undefined4 *)(*in_ECX + in_ECX[2] * 4);
      local_8 = 0;
      if (puVar1 != (undefined4 *)0x0) {
        psVar2 = (short *)*param_1;
        if ((psVar2 == (short *)0x0) || (*psVar2 == 0)) {
          *puVar1 = &DAT_00bfe12c;
        }
        else {
          iVar6 = FUN_0045ddd0(psVar2,uVar4);
          uVar7 = iVar6 + 4U & 0xfffffffc;
          puVar5 = (undefined4 *)FUN_004bfe22(uVar7 + 0xb);
          puVar5[1] = uVar7;
          *puVar5 = 0;
          FUN_0045e480(psVar2);
          *puVar1 = puVar5 + 2;
        }
        param_1 = param_1 + 1;
      }
      in_ECX[2] = in_ECX[2] + 1;
      ppvVar3 = ExceptionList;
    }
  }
  ExceptionList = local_10;
  return;
}

