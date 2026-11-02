// rea decompile_all
// name: FUN_004c63d4
// address: 0x4c63d4
// body: available
// range: 0x4c63d4-0x4c64b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004c63d4(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 *unaff_EDI;
  undefined1 *local_40;
  undefined4 *local_3c;
  undefined1 local_28 [8];
  int local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined1 local_11 [9];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  puVar3 = &LAB_005e01a6;
  local_8 = 0x4c63e0;
  if (*(char *)(unaff_EDI + 0x30) == '\0') {
    local_18 = &local_40;
    local_40 = param_2;
    local_3c = (undefined4 *)param_3;
    uVar4 = FUN_004c4e62();
    puVar3 = (undefined1 *)FUN_004c4eb5(uVar4);
    if (puVar3 == (undefined1 *)0x0) {
      *(undefined1 *)(unaff_EDI + 0x30) = 1;
      local_3c = (undefined4 *)0x4c6422;
      FUN_0040954d();
      local_3c = (undefined4 *)local_11;
      local_8 = 0;
      local_40 = local_28;
      local_11[0] = 0;
      cVar2 = (**(code **)(*(int *)unaff_EDI[0x2b] + 8))(param_1);
      if ((cVar2 != '\0') && (0 < local_20)) {
        local_3c = (undefined4 *)local_1c;
        local_40 = (undefined1 *)0x4c6450;
        pbVar5 = (byte *)FUN_004f4b66();
        if ((*pbVar5 & 0x70) != 0) {
          local_3c = (undefined4 *)0x18;
          local_40 = (undefined1 *)0x4c645d;
          puVar6 = (undefined4 *)FUN_005af82d();
          uVar1 = local_11[0];
          local_18 = puVar6;
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = juce::ReferenceCountedObject::vftable;
            puVar6[1] = 0;
            local_3c = puVar6 + 2;
            local_8 = CONCAT31(local_8._1_3_,2);
            *puVar6 = juce::DragAndDropContainer::DragImageComponent::ExternalDragAndDropMessage::
                      vftable;
            local_40 = (undefined1 *)0x4c648c;
            FUN_00467037();
            *(undefined1 *)(puVar6 + 5) = uVar1;
          }
          local_8 = local_8 & 0xffffff00;
          local_3c = (undefined4 *)0x4c64a0;
          FUN_00473c1d();
          local_3c = (undefined4 *)0x1;
          local_40 = (undefined1 *)0x4c64a8;
          (**(code **)*unaff_EDI)();
        }
      }
      local_3c = (undefined4 *)0x4c64b0;
      puVar3 = (undefined1 *)FUN_004670ed();
    }
  }
  return puVar3;
}

