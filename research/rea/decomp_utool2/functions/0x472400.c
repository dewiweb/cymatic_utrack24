// rea decompile_all
// name: FUN_00472400
// address: 0x472400
// body: available
// range: 0x472400-0x47251e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00472400(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_ECX;
  undefined4 **ppuVar7;
  int *piVar8;
  undefined4 *local_28 [2];
  float afStack_20 [5];
  undefined4 uStack_c;
  
  iVar1 = *param_1;
  if (*(int *)(in_ECX + 8) != iVar1) {
    if (iVar1 != 0) {
      LOCK();
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      UNLOCK();
    }
    puVar5 = *(undefined4 **)(in_ECX + 8);
    *(int *)(in_ECX + 8) = iVar1;
    if (puVar5 != (undefined4 *)0x0) {
      LOCK();
      piVar8 = puVar5 + 1;
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*puVar5)(1);
      }
    }
  }
  if (*(int *)(*param_1 + 8) == 0) {
    ppuVar7 = local_28;
    piVar8 = param_1;
    FUN_004681b0(ppuVar7,param_1);
    puVar5 = (undefined4 *)FUN_004682f0(ppuVar7,piVar8);
    uVar2 = *(undefined4 *)(*param_1 + 8);
    *(undefined4 *)(*param_1 + 8) = *puVar5;
    *puVar5 = uVar2;
    if (local_28[0] != (undefined4 *)0x0) {
      LOCK();
      piVar8 = local_28[0] + 1;
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*local_28[0])(1);
      }
    }
  }
  piVar8 = *(int **)(*param_1 + 8);
  pcVar3 = *(code **)(*piVar8 + 0x24);
  if (pcVar3 == FUN_004133b0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*pcVar3)();
  }
  *(undefined1 *)(in_ECX + 0x18) = uVar4;
  *(undefined4 *)(in_ECX + 0x10) = param_2;
  afStack_20[4] = *(float *)(*(int *)(in_ECX + 8) + 0x14);
  afStack_20[0] = *(float *)(*(int *)(in_ECX + 8) + 0x18) * afStack_20[4];
  afStack_20[1] = 0.0;
  afStack_20[2] = 0.0;
  afStack_20[3] = 0.0;
  uStack_c = 0;
  puVar6 = (undefined4 *)(**(code **)(*piVar8 + 0x20))(param_2,afStack_20,afStack_20[4]);
  puVar5 = *(undefined4 **)(in_ECX + 0xc);
  if ((puVar5 != puVar6) && (*(undefined4 **)(in_ECX + 0xc) = puVar6, puVar5 != (undefined4 *)0x0))
  {
    FID_conflict__free((void *)*puVar5);
    FUN_004bfe14(puVar5,0x20);
  }
  return;
}

