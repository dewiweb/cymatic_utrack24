// rea decompile_all
// name: thunk_FUN_006ea0b0
// address: 0x412230
// body: available
// range: 0x412230-0x412234 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_006ea0b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *piVar3;
  int *piVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00728e8b;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  *in_ECX = juce::Component::vftable;
  iVar5 = in_ECX[0x15];
  while (0 < iVar5) {
    iVar5 = iVar5 + -1;
    if (((int)in_ECX[0x15] <= iVar5) && (iVar5 = in_ECX[0x15] + -1, iVar5 < 0)) break;
    FUN_004b3e9a();
  }
  if (in_ECX[0x19] != 0) {
    *(undefined4 *)(in_ECX[0x19] + 8) = 0;
  }
  iVar5 = in_ECX[0xc];
  while (0 < iVar5) {
    FUN_006cf0a0(in_ECX[0xc] + -1,0,1);
    iVar5 = in_ECX[0xc];
  }
  iVar5 = in_ECX[3];
  puVar1 = DAT_00c8a678;
  if (iVar5 == 0) {
    for (; puVar1 != in_ECX; puVar1 = (undefined4 *)puVar1[3]) {
      if (puVar1 == (undefined4 *)0x0) goto LAB_006ea1a7;
    }
    FUN_006cc310(uVar2);
  }
  else {
    piVar4 = *(int **)(iVar5 + 0x28);
    for (piVar3 = piVar4; piVar3 != piVar4 + *(int *)(iVar5 + 0x30); piVar3 = piVar3 + 1) {
      if (in_ECX == (undefined4 *)*piVar3) {
        FUN_006cf0a0((int)piVar3 - (int)piVar4 >> 2,1,0);
        goto LAB_006ea1a7;
      }
    }
    FUN_006cf0a0(0xffffffff,1,0);
  }
LAB_006ea1a7:
  if ((*(byte *)(in_ECX + 0x1a) & 1) != 0) {
    FUN_006cfd60();
  }
  puVar1 = (undefined4 *)in_ECX[0x19];
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar1 + 1;
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_0045a4f0();
  FID_conflict__free((void *)in_ECX[0x16]);
  FID_conflict__free((void *)in_ECX[0x13]);
  puVar1 = (undefined4 *)in_ECX[0x12];
  if (puVar1 != (undefined4 *)0x0) {
    FID_conflict__free((void *)*puVar1);
    FUN_004bfe14(puVar1,0xc);
  }
  puVar1 = (undefined4 *)in_ECX[0x11];
  if (puVar1 != (undefined4 *)0x0) {
    FID_conflict__free((void *)*puVar1);
    FUN_004bfe14(puVar1,0x10);
  }
  if ((undefined4 *)in_ECX[0x10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x10])(1);
  }
  if (in_ECX[0xe] != 0) {
    FUN_004912c0();
  }
  FID_conflict__free((void *)in_ECX[10]);
  FUN_004bfe14(in_ECX[9],0x18);
  if ((undefined4 *)in_ECX[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[8])(1);
  }
  piVar4 = (int *)(in_ECX[2] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(in_ECX[1] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  *in_ECX = juce::MouseListener::vftable;
  ExceptionList = pvStack_10;
  return;
}

