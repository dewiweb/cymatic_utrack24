// rea decompile_all
// name: FUN_006b0a30
// address: 0x6b0a30
// body: available
// range: 0x6b0a30-0x6b0b10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b0a30(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_24 [16];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723829;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  uVar6 = *(undefined4 *)(param_1 + 8);
  iVar4 = in_ECX + 0x78;
  FUN_006e6400(local_24);
  FUN_006b1050(iVar4,uVar6,uVar7,uVar2);
  if (*(int *)(in_ECX + 0x98) != param_1) {
    *(int *)(in_ECX + 0x98) = param_1;
    piVar3 = (int *)FUN_006b0ec0(&local_14);
    local_8 = 0;
    if (*(int **)(in_ECX + 0x38) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = **(int **)(in_ECX + 0x38);
    }
    piVar1 = (int *)*piVar3;
    if (piVar1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if (iVar4 != iVar5) {
      if (piVar1 != (int *)0x0) {
        LOCK();
        piVar1[1] = piVar1[1] + 1;
        UNLOCK();
      }
      if (*(int *)(in_ECX + 0x38) != 0) {
        FUN_004912c0();
      }
      *(int *)(in_ECX + 0x38) = *piVar3;
      if ((*(byte *)(in_ECX + 0x68) & 2) != 0) {
        FUN_006cec20();
      }
    }
    if (local_14 != 0) {
      FUN_004912c0();
    }
  }
  ExceptionList = local_10;
  return;
}

