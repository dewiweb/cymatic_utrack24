// rea decompile_all
// name: FUN_004b5ff0
// address: 0x4b5ff0
// body: available
// range: 0x4b5ff0-0x4b619a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004b5ff0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int *_Memory;
  int *in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = in_stack_00000018;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704068;
  local_10 = ExceptionList;
  if (param_2 == 0xfa) {
    ExceptionList = &local_10;
    uVar3 = FUN_004b61b0();
    local_8 = 0;
    cVar2 = (**(code **)(**(int **)(param_1 + 0x34) + 0xb0))(uVar3);
    **(short **)(*piVar4 + 8) = (cVar2 != '\0') - 1;
    piVar4 = in_stack_00000018;
  }
  else {
    if (param_2 == 0x111) {
      ExceptionList = &local_10;
      FUN_0045cae0(*(undefined4 *)(*in_stack_00000018 + 8));
      local_8 = 1;
      (**(code **)(**(int **)(param_1 + 0x34) + 0xbc))(&stack0x00000018);
      _Memory = in_stack_00000018 + -2;
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      **(undefined2 **)(*piVar4 + 0x38) = 0xffff;
      ExceptionList = local_10;
      return 0;
    }
    if (param_2 != 0x103) {
      if (param_2 != 0x107) {
        return 0x80004001;
      }
      ExceptionList = &local_10;
      (**(code **)(**(int **)(param_1 + 0x34) + 0xb8))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
      if (in_stack_00000018[2] == 0) {
        ExceptionList = local_10;
        return 0;
      }
      if (*(short *)*in_stack_00000018 != 0x400b) {
        ExceptionList = local_10;
        return 0;
      }
      **(undefined2 **)((short *)*in_stack_00000018 + 4) = 0xffff;
      ExceptionList = local_10;
      return 0;
    }
    ExceptionList = &local_10;
    uVar3 = FUN_004b61b0();
    local_8 = 2;
    (**(code **)(**(int **)(param_1 + 0x34) + 0xb4))(uVar3);
    piVar4 = (int *)0x103;
  }
  piVar4 = piVar4 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  return 0;
}

