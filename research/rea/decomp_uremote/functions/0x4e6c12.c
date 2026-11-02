// rea decompile_all
// name: FUN_004e6c12
// address: 0x4e6c12
// body: available
// range: 0x4e6c12-0x4e6e2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e6c12(void)

{
  int iVar1;
  undefined1 uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 *extraout_EDX;
  int iVar5;
  undefined4 uVar6;
  int local_20;
  int local_1c;
  undefined4 *local_14;
  
  *(undefined1 *)(in_EAX + 0x32c) = 1;
  iVar1 = *(int *)(*(int *)(in_EAX + 0x310) + 0x8c);
  if (*(int *)(in_EAX + 0x78) == 0) {
    local_20 = 0;
  }
  else {
    local_20 = *(int *)(*(int *)(in_EAX + 0x78) + 8);
  }
  if (0 < iVar1) {
    iVar4 = *(int *)(in_EAX + 0x80);
    iVar3 = FUN_004d227d();
    iVar5 = iVar3 / extraout_ECX + 2;
    FUN_004f6f89(iVar5);
    iVar3 = *(int *)(in_EAX + 0x31c);
    while (iVar3 < iVar5) {
      iVar3 = FUN_005af82d(0x84);
      if (iVar3 == 0) {
        local_14 = (undefined4 *)0x0;
      }
      else {
        uVar6 = *(undefined4 *)(in_EAX + 0x310);
        FUN_004bfd7b();
        extraout_EDX[0x1c] = juce::TooltipClient::vftable;
        *extraout_EDX = juce::ListBox::RowComponent::vftable;
        extraout_EDX[0x1c] = juce::ListBox::RowComponent::vftable;
        extraout_EDX[0x1d] = 0;
        extraout_EDX[0x1f] = 0xffffffff;
        extraout_EDX[0x1e] = uVar6;
        *(undefined1 *)(extraout_EDX + 0x20) = 0;
        *(undefined1 *)((int)extraout_EDX + 0x81) = 0;
        *(undefined1 *)((int)extraout_EDX + 0x82) = 0;
        local_14 = extraout_EDX;
      }
      if (*(int *)(in_EAX + 0x318) < *(int *)(in_EAX + 0x31c) + 1) {
        FUN_004f8197();
      }
      iVar3 = *(int *)(in_EAX + 0x31c);
      *(int *)(in_EAX + 0x31c) = iVar3 + 1;
      *(undefined4 **)(*(int *)(in_EAX + 0x314) + iVar3 * 4) = local_14;
      FUN_004c1064(0xffffffff);
      iVar3 = *(int *)(in_EAX + 0x31c);
    }
    *(int *)(in_EAX + 800) = iVar4 / iVar1;
    *(int *)(in_EAX + 0x324) = (iVar4 + -1 + iVar1) / iVar1;
    iVar3 = FUN_004d227d();
    local_1c = 0;
    *(int *)(in_EAX + 0x328) = (iVar3 + -1 + extraout_ECX_00) / iVar1;
    if (0 < iVar5) {
      do {
        iVar3 = *(int *)(in_EAX + 800) + local_1c;
        iVar4 = FUN_004e6af6(iVar3);
        if (iVar4 != 0) {
          FUN_004c09cc(0,iVar3 * iVar1,iVar1);
          uVar2 = FUN_004e766a(iVar3);
          FUN_004e661f(iVar3,uVar2);
        }
        local_1c = local_1c + 1;
      } while (local_1c < iVar5);
    }
  }
  iVar1 = *(int *)(in_EAX + 0x310);
  if (*(int *)(iVar1 + 0x80) != 0) {
    uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x80) + 0x1c);
    iVar3 = *(int *)(iVar1 + 0x94);
    FUN_00439b5a(*(int *)(iVar1 + 0x18) + iVar3 * -2,uVar6);
    FUN_004c09cc(*(int *)(local_20 + 0x10) + iVar3,iVar3,uVar6);
  }
  return;
}

