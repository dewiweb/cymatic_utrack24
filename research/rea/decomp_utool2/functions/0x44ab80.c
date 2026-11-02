// rea decompile_all
// name: FUN_0044ab80
// address: 0x44ab80
// body: available
// range: 0x44ab80-0x44acea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044ab80(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ff4f4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)(*(int *)(in_ECX + 0x80) + 0x98);
  if ((piVar1 != (int *)0x0) &&
     (cVar3 = (**(code **)(*piVar1 + 0x50))(DAT_00c76070 ^ (uint)&stack0xfffffffc), cVar3 != '\0'))
  {
    if (*(int *)(in_ECX + 0xd0) != 0) {
      ExceptionList = local_10;
      return;
    }
    operator_new(0xe0);
    local_8 = 0;
    uVar4 = FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar5 = FUN_00637250();
    local_8 = 2;
    puVar6 = (undefined4 *)FUN_006e6560(uVar5,uVar4);
    local_8 = 4;
    puVar2 = *(undefined4 **)(in_ECX + 0xd0);
    if ((puVar2 != puVar6) &&
       (*(undefined4 **)(in_ECX + 0xd0) = puVar6, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    piVar1 = *(int **)(in_ECX + 0xd0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x28))(1);
      FUN_006e5050(piVar1,0xffffffff);
    }
    FUN_00637c10();
    local_8 = 0xffffffff;
    FUN_00637c10();
    if (in_ECX + 0x78 != 0) {
      FUN_004097d0(in_ECX + 0x78);
    }
    FUN_00449890();
    ExceptionList = local_10;
    return;
  }
  puVar2 = *(undefined4 **)(in_ECX + 0xd0);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0xd0) = 0;
    (**(code **)*puVar2)(1);
  }
  ExceptionList = local_10;
  return;
}

