// rea decompile_all
// name: FUN_004419ce
// address: 0x4419ce
// body: available
// range: 0x4419ce-0x441c47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004419ce(char param_1,int param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar2 = *(int *)(in_EAX + 0x1c);
  iVar1 = *(int *)(in_EAX + 0x18);
  if (*(int *)(in_EAX + 0x78) != 0) {
    if (1.0 < *(float *)(in_EAX + 0xa4)) {
      FUN_005b3fb0();
      iVar1 = FUN_005b3fb0();
      if (param_2 < -10) {
        iVar1 = FUN_005b3fb0();
      }
      if (10 < param_2) {
        iVar1 = FUN_005b3fb0();
      }
      if (0 < iVar1) {
        iVar1 = 0;
      }
      if (iVar1 < *(int *)(in_EAX + 0x88)) {
        iVar1 = *(int *)(in_EAX + 0x88);
      }
      *(int *)(in_EAX + 0x8c) = iVar1;
      *(int *)(in_EAX + 0x90) = iVar1;
    }
    iVar1 = *(int *)(*(int *)(in_EAX + 0xac) + 0x18);
  }
  if (0 < *(int *)(in_EAX + 0xa0)) {
    *(undefined4 *)(in_EAX + 0x98) = *(undefined4 *)(in_EAX + 0x9c);
    if (0.0 < *(float *)(in_EAX + 0xa8)) {
      FUN_005b3fb0();
      iVar2 = FUN_005b3fb0();
      if (param_3 < -10) {
        iVar2 = FUN_005b3fb0();
      }
      if (10 < param_3) {
        iVar2 = FUN_005b3fb0();
      }
      if (0 < iVar2) {
        iVar2 = 0;
      }
      if (iVar2 < *(int *)(in_EAX + 0x94)) {
        iVar2 = *(int *)(in_EAX + 0x94);
      }
      *(int *)(in_EAX + 0x98) = iVar2;
      *(int *)(in_EAX + 0x9c) = iVar2;
    }
    iVar2 = *(int *)(*(int *)(in_EAX + 0xac) + 0x1c);
    if (*(int *)(in_EAX + 0x8c) < *(int *)(in_EAX + 0x88)) {
      *(int *)(in_EAX + 0x8c) = *(int *)(in_EAX + 0x88);
    }
    if (*(int *)(in_EAX + 0x98) < *(int *)(in_EAX + 0x94)) {
      *(int *)(in_EAX + 0x98) = *(int *)(in_EAX + 0x94);
    }
    *(undefined4 *)(in_EAX + 0x9c) = *(undefined4 *)(in_EAX + 0x98);
  }
  if ((((*(int *)(in_EAX + 0x78) != 0) || (*(int *)(in_EAX + 0x80) != 0)) && (iVar1 != 0)) &&
     (iVar2 != 0)) {
    if (param_1 == '\0') {
      FUN_004c4e62();
      uVar8 = 0;
      uVar7 = 0x3ff0000000000000;
      uVar6 = 0;
      uVar5 = 300;
      uVar4 = 0x3f800000;
      uVar3 = FUN_00441dec(*(undefined4 *)(in_EAX + 0x98));
      FUN_004cf6e0(uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
      FUN_004d1266(in_EAX + 0xb0,0,(double)-*(int *)(*(int *)(in_EAX + 0xac) + 0x10),
                   (double)*(int *)(in_EAX + 0x18));
      FUN_004d1266(in_EAX + 0x1b0,0,(double)-*(int *)(*(int *)(in_EAX + 0xac) + 0x14),
                   (double)*(int *)(in_EAX + 0x1c));
    }
    else {
      FUN_004c0bf7(*(undefined4 *)(in_EAX + 0x8c),*(undefined4 *)(in_EAX + 0x98));
    }
  }
  return;
}

