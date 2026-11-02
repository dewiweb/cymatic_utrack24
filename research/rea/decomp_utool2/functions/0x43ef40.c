// rea decompile_all
// name: FUN_0043ef40
// address: 0x43ef40
// body: available
// range: 0x43ef40-0x43f05e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0043ef40(undefined4 param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar5;
  uint uVar6;
  
  if (*(char *)(in_ECX + 0x90) == '\0') {
    uVar6 = *(int *)(in_ECX + 0x10) * param_2 * *(int *)(in_ECX + 0x14) >> 3;
    iVar5 = in_ECX;
    if (*(uint *)(in_ECX + 0x2c) < uVar6) {
      if (uVar6 == 0) {
        FID_conflict__free(*(void **)(in_ECX + 0x28));
        *(undefined4 *)(in_ECX + 0x28) = 0;
        *(undefined4 *)(in_ECX + 0x2c) = 0;
        iVar5 = extraout_ECX;
      }
      else {
        if (*(int *)(in_ECX + 0x28) == 0) {
          FID_conflict__free((void *)0x0);
          uVar4 = FUN_004c554b(uVar6);
          iVar5 = extraout_ECX_01;
        }
        else {
          uVar4 = FUN_004c553b(*(int *)(in_ECX + 0x28),uVar6);
          iVar5 = extraout_ECX_00;
        }
        *(undefined4 *)(in_ECX + 0x28) = uVar4;
        *(uint *)(in_ECX + 0x2c) = uVar6;
      }
    }
    switch(*(undefined4 *)(in_ECX + 0x14)) {
    case 8:
      FUN_00440840(param_1,param_2,iVar5);
      break;
    case 0x10:
      FUN_004407c0(param_1,param_2,iVar5);
      break;
    case 0x18:
      FUN_00440740(param_1,param_2,iVar5);
      break;
    case 0x20:
      FUN_004406d0(param_1,param_2,iVar5);
    }
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x10))(*(undefined4 *)(in_ECX + 0x28),uVar6);
    if (cVar3 != '\0') {
      puVar1 = (uint *)(in_ECX + 0x80);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar6;
      *(int *)(in_ECX + 0x84) = *(int *)(in_ECX + 0x84) + (uint)CARRY4(uVar2,uVar6);
      puVar1 = (uint *)(in_ECX + 0x78);
      uVar6 = *puVar1;
      *puVar1 = *puVar1 + param_2;
      *(int *)(in_ECX + 0x7c) =
           *(int *)(in_ECX + 0x7c) + ((int)param_2 >> 0x1f) + (uint)CARRY4(uVar6,param_2);
      return 1;
    }
    FUN_0043f130();
    *(undefined1 *)(in_ECX + 0x90) = 1;
  }
  return 0;
}

