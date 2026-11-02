// rea decompile_all
// name: FUN_0040a25b
// address: 0x40a25b
// body: available
// range: 0x40a25b-0x40a352 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040a25b(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *local_8;
  
  piVar2 = param_1;
  iVar3 = *param_1;
  if ((*(byte *)(iVar3 + 8) & 2) != 0) {
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x214) + 0x94))(iVar3,param_2,&param_1);
    if (iVar3 == 0) {
      uVar6 = FUN_0040a197(piVar2,param_1);
      return uVar6;
    }
    piVar2[0xb] = -1;
  }
  FUN_0040f40c(*piVar2);
  iVar3 = FUN_00409ed1();
  if (iVar3 != 0) {
    iVar4 = *(int *)(*piVar2 + 0x2b4);
    puVar1 = (undefined4 *)piVar2[10];
    param_1 = *(int **)(iVar4 + 0x570);
    (**(code **)(iVar3 + 4))(*puVar1,piVar2[4],piVar2[5],0,0);
    iVar7 = *(int *)(iVar4 + 0x768);
    if (iVar7 != 0) {
      local_8 = (int *)(iVar4 + 0x768 + iVar7 * 4);
      do {
        if (param_1 == (int *)*(int *)(*local_8 + 0x44)) {
          iVar4 = piVar2[4];
          iVar5 = piVar2[5];
        }
        else {
          iVar4 = FUN_0040d230(param_1);
          iVar5 = FUN_0040d230(param_1);
        }
        (**(code **)(iVar3 + 4))(puVar1[iVar7],iVar4,iVar5,0,0);
        local_8 = local_8 + -1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return 0;
}

