// rea decompile_all
// name: FUN_006c24c0
// address: 0x6c24c0
// body: available
// range: 0x6c24c0-0x6c25ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c24c0(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725618;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar1 = *(int *)(in_ECX + 0x150);
    if (iVar1 != 0) {
      *(undefined4 *)(in_ECX + 0x150) = 0;
      FUN_00407640(uVar5);
      FUN_004bfe14(iVar1,0x10);
    }
    FUN_006c2600(param_1,0);
    ExceptionList = local_10;
    return;
  }
  if ((*(int *)(in_ECX + 0x150) != 0) &&
     (cVar3 = FUN_0069d640(*(int *)(in_ECX + 0x150)), cVar3 != '\0')) {
    ExceptionList = local_10;
    return;
  }
  operator_new(0x10);
  local_8 = 0;
  iVar6 = FUN_0069dcd0(param_1);
  local_8 = 0xffffffff;
  iVar1 = *(int *)(in_ECX + 0x150);
  if ((iVar1 != iVar6) && (*(int *)(in_ECX + 0x150) = iVar6, iVar1 != 0)) {
    FUN_00407640(uVar5);
    FUN_004bfe14(iVar1,0x10);
  }
  operator_new(0x30);
  piVar7 = (int *)FUN_00491a20(in_ECX);
  piVar2 = *(int **)(in_ECX + 0x20);
  if ((piVar2 != piVar7) && (*(int **)(in_ECX + 0x20) = piVar7, piVar2 != (int *)0x0)) {
    (**(code **)*piVar2)(1);
  }
  if ((char)piVar7[10] == '\0') {
    FUN_0069e630();
    uVar4 = (**(code **)(*piVar7 + 8))();
    *(undefined1 *)(piVar7 + 10) = uVar4;
  }
  (**(code **)(*piVar7 + 0xc))();
  ExceptionList = local_10;
  return;
}

