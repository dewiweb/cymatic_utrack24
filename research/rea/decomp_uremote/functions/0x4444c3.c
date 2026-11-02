// rea decompile_all
// name: FUN_004444c3
// address: 0x4444c3
// body: available
// range: 0x4444c3-0x44462f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004444c3(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *puVar6;
  undefined4 uStack_28;
  int iStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x4444cf;
  puVar6 = (undefined4 *)auStack_20;
  if (*(char *)(in_ECX + 0x14c) != '\0') {
    iVar4 = *(int *)(in_ECX + 0x18);
    iStack_24 = 0x4444ea;
    iStack_24 = FUN_004c6dc5();
    uStack_28 = 0x4444f0;
    iVar3 = FUN_005af9e1();
    if (iVar3 < iVar4 / 2) {
      iStack_24 = 0x134;
      uStack_28 = 0x44450c;
      iVar4 = FUN_005af82d();
      local_8 = 0;
      if (iVar4 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        uStack_28 = 0x44451f;
        iStack_24 = iVar4;
        puVar5 = (undefined4 *)FUN_004437bc();
      }
      local_8 = 0xffffffff;
      puVar2 = *(undefined4 **)(in_ECX + 0x1cc);
      if ((puVar2 != puVar5) &&
         (*(undefined4 **)(in_ECX + 0x1cc) = puVar5, puVar2 != (undefined4 *)0x0)) {
        iStack_24 = 1;
        puVar6 = &uStack_28;
        uStack_28 = 0x444543;
        (**(code **)*puVar2)();
      }
      for (iVar4 = *(int *)(in_ECX + 0xc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
        *(undefined4 *)((int)puVar6 + -4) = 0;
        *(TypeDescriptor **)((int)puVar6 + -8) = &MainComponent::RTTI_Type_Descriptor;
        *(TypeDescriptor **)((int)puVar6 + -0xc) = &juce::Component::RTTI_Type_Descriptor;
        *(undefined4 *)((int)puVar6 + -0x10) = 0;
        *(int *)((int)puVar6 + -0x14) = iVar4;
        *(undefined4 *)((int)puVar6 + -0x18) = 0x44455a;
        iVar3 = FUN_005cdbcf();
        if (iVar3 != 0) goto LAB_0044456e;
      }
      iVar3 = 0;
LAB_0044456e:
      *(undefined4 *)((int)puVar6 + -4) = 0xffffffff;
      *(undefined4 *)((int)puVar6 + -8) = 0x44457b;
      FUN_004c1064();
      *(undefined4 *)((int)puVar6 + -4) = *(undefined4 *)(iVar3 + 0x2dfc);
      *(undefined4 *)((int)puVar6 + -8) = 0;
      *(undefined4 *)((int)puVar6 + -0xc) = 0;
      *(undefined4 *)((int)puVar6 + -0x10) = 0x444591;
      FUN_004c09cc();
      *(undefined4 *)((int)puVar6 + -4) = 1;
      *(undefined4 *)((int)puVar6 + -8) = 0x44459e;
      FUN_004c052f();
      uVar1 = *(undefined4 *)(in_ECX + 0x144);
      *(undefined4 *)((int)puVar6 + -4) = extraout_ECX;
      *(undefined4 *)((int)puVar6 + -4) = uVar1;
      *(undefined4 *)((int)puVar6 + -8) = 0x4445b9;
      FUN_0044447d();
      uVar1 = *(undefined4 *)(in_ECX + 0x148);
      *(undefined4 *)((int)puVar6 + -4) = extraout_ECX_00;
      *(undefined4 *)((int)puVar6 + -4) = uVar1;
      *(undefined4 *)((int)puVar6 + -8) = 0x4445d4;
      FUN_00444630();
      iVar4 = 0;
      if (0 < *(int *)(in_ECX + 0x1c8)) {
        do {
          *(undefined4 *)((int)puVar6 + -4) = 0x444610;
          FUN_00444b00();
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(in_ECX + 0x1c8));
      }
      goto LAB_00444628;
    }
  }
  iStack_24 = 0x444628;
  FUN_0047479c();
LAB_00444628:
  *(undefined4 *)((int)puVar6 + -4) = 0x44462d;
  return;
}

