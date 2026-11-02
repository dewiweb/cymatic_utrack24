// rea decompile_all
// name: FUN_00490e00
// address: 0x490e00
// body: available
// range: 0x490e00-0x490f42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00490e00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  void *local_24;
  void *local_20;
  void *local_1c;
  undefined4 *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070204a;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x30) == '\0') {
    if (DAT_00c8a67c == 0) {
      local_18 = operator_new(0xd0);
      local_8 = 0;
      DAT_00c8a67c = FUN_006cb960();
    }
    local_8 = 0xffffffff;
    local_24 = (void *)FUN_006cb750(param_2,param_3);
    if (local_24 == (void *)0x0) {
      *(undefined1 *)(in_ECX + 0x30) = 1;
      local_8 = 1;
      local_11 = 0;
      local_20 = local_24;
      local_1c = local_24;
      if (*(code **)(*(int *)in_ECX[0x2b] + 8) != FUN_006e4840) {
        cVar2 = (**(code **)(*(int *)in_ECX[0x2b] + 8))(param_1,&local_24,&local_11,uVar3);
        if ((cVar2 != '\0') && (0 < (int)local_1c)) {
          pbVar4 = (byte *)FUN_00687140();
          if ((*pbVar4 & 0x70) != 0) {
            puVar5 = operator_new(0x18);
            uVar1 = local_11;
            *puVar5 = juce::ReferenceCountedObject::vftable;
            puVar5[1] = 0;
            *puVar5 = juce::DragAndDropContainer::DragImageComponent::ExternalDragAndDropMessage::
                      vftable;
            local_18 = puVar5;
            FUN_0041b050(&local_24);
            *(undefined1 *)(puVar5 + 5) = uVar1;
            FUN_0063e270();
            (**(code **)*in_ECX)(1);
          }
        }
      }
      FUN_0040f7f0();
      FID_conflict__free(local_24);
    }
  }
  ExceptionList = local_10;
  return;
}

