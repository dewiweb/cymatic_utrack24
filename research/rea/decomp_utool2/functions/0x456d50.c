// rea decompile_all
// name: FUN_00456d50
// address: 0x456d50
// body: available
// range: 0x456d50-0x456e76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00456d50(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  void *_Memory;
  uint uVar6;
  undefined4 uVar7;
  int in_ECX;
  undefined1 uVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700458;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 4) == 0) {
    puVar5 = (undefined4 *)FUN_006358c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    puVar3 = *(undefined4 **)(in_ECX + 4);
    if ((puVar3 != puVar5) && (*(undefined4 **)(in_ECX + 4) = puVar5, puVar3 != (undefined4 *)0x0))
    {
      (**(code **)*puVar3)(1);
    }
    if (*(int *)(in_ECX + 4) == 0) {
      ExceptionList = local_10;
      return 0;
    }
  }
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  _Memory = (void *)FUN_004c554b(0x1000);
  local_8 = 0;
  cVar4 = (**(code **)(**(int **)(in_ECX + 4) + 8))();
  do {
    if (cVar4 != '\0') {
      puVar3 = *(undefined4 **)(in_ECX + 4);
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)(in_ECX + 4) = 0;
        (**(code **)*puVar3)(1);
      }
      uVar8 = 1;
LAB_00456e54:
      FID_conflict__free(_Memory);
      ExceptionList = local_10;
      return uVar8;
    }
    uVar6 = (**(code **)(**(int **)(in_ECX + 4) + 0xc))(_Memory,0x1000);
    if ((int)uVar6 < 0) {
      uVar8 = 0;
      goto LAB_00456e54;
    }
    if (_Memory == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_00619e10(uVar6);
    }
    *(undefined4 *)(in_ECX + 0x34) = uVar7;
    (**(code **)(*param_1 + 0x10))(_Memory,uVar6);
    puVar1 = (uint *)(in_ECX + 0x20);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar6;
    *(int *)(in_ECX + 0x24) =
         *(int *)(in_ECX + 0x24) + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar2,uVar6);
    cVar4 = (**(code **)(**(int **)(in_ECX + 4) + 8))();
  } while( true );
}

