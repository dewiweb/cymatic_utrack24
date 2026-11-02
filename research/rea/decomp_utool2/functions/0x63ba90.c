// rea decompile_all
// name: FUN_0063ba90
// address: 0x63ba90
// body: available
// range: 0x63ba90-0x63bbfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0063ba90(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071f519;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 != (int *)0x0) {
    local_8 = 0;
    if (*(char *)(in_ECX + 0x49) != '\0') {
      (**(code **)*param_1)(1);
      ExceptionList = local_10;
      return 0;
    }
    cVar1 = (*(code *)((undefined4 *)*param_1)[1])(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (cVar1 != '\0') {
      uVar4 = *(int *)(in_ECX + 0x44) - 1;
      if (uVar4 < *(uint *)(in_ECX + 0x24)) {
        piVar5 = *(int **)(*(int *)(in_ECX + 0x1c) + uVar4 * 4);
      }
      else {
        piVar5 = (int *)0x0;
      }
      if ((piVar5 == (int *)0x0) || (*(char *)(in_ECX + 0x48) != '\0')) {
        operator_new(0x18);
        uVar6 = FUN_004622b0(in_ECX + 0x34);
        FUN_00411110(*(undefined4 *)(in_ECX + 0x44),uVar6);
        *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x44) + 1;
      }
      else if (0 < piVar5[2]) {
        piVar5 = *(int **)(*piVar5 + -4 + piVar5[2] * 4);
        if (piVar5 != (int *)0x0) {
          uVar6 = 0x63bb3e;
          piVar2 = (int *)(**(code **)(*piVar5 + 0x10))(param_1);
          if (piVar2 != (int *)0x0) {
            if (param_1 != piVar2) {
              uVar6 = 0x63bb54;
              (**(code **)*param_1)(1);
              param_1 = piVar2;
            }
            uVar7 = 0x63bb5c;
            iVar3 = (**(code **)(*piVar5 + 0xc))();
            *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) - iVar3;
            FUN_004624f0(uVar6,uVar7);
          }
        }
      }
      iVar3 = (**(code **)(*param_1 + 0xc))();
      *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + iVar3;
      FUN_004111b0(param_1);
      *(undefined1 *)(in_ECX + 0x48) = 0;
      FUN_006396d0();
      FUN_00639650();
      FUN_0063ec20();
      ExceptionList = local_10;
      return 1;
    }
    (**(code **)*param_1)(1);
  }
  ExceptionList = local_10;
  return 0;
}

