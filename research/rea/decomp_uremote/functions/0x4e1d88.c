// rea decompile_all
// name: FUN_004e1d88
// address: 0x4e1d88
// body: available
// range: 0x4e1d88-0x4e1f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e1d88(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int in_EAX;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = (undefined4 *)(in_EAX + 0x1c);
  cVar3 = FUN_004f5e38(*puVar1,*(undefined4 *)(in_EAX + 0x20));
  if ((cVar3 != '\0') || (*(int *)(in_EAX + 0x34) + 0x15eU < param_1)) {
    cVar3 = FUN_004c0ee2(1,param_4,param_5);
    if (cVar3 != '\0') {
      *(undefined1 *)(*(int *)(in_EAX + 0x14) + 0xbc) = 1;
    }
    iVar5 = FUN_004f5e53(param_2,param_3);
    if (2 < iVar5) {
      *(uint *)(in_EAX + 0x34) = param_1;
      pcVar6 = (char *)(*(int *)(in_EAX + 0x14) + 0xc0);
      if ((*pcVar6 != '\0') && (cVar3 != '\0')) {
        *pcVar6 = '\0';
      }
    }
    if ((*(char *)(*(int *)(in_EAX + 0x14) + 0xc0) == '\0') &&
       ((*(int *)(*(int *)(in_EAX + 0x14) + 0xd4) == 0 || (cVar4 = FUN_004e0f47(), cVar4 == '\0'))))
    {
      if ((cVar3 == '\0') ||
         ((cVar4 = FUN_004f5e38(*puVar1,*(undefined4 *)(in_EAX + 0x20)), cVar4 == '\0' ||
          (cVar4 = FUN_004e1f40(param_2,param_3), cVar4 == '\0')))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      *puVar1 = param_2;
      *(undefined4 *)(in_EAX + 0x20) = param_3;
      if (!bVar2) {
        iVar5 = FUN_004c0f4a(param_4,param_5);
        if (iVar5 == *(int *)(in_EAX + 0x14)) {
          iVar5 = 0;
        }
        iVar7 = FUN_005cdbcf(iVar5,0,&juce::Component::RTTI_Type_Descriptor,
                             &juce::PopupMenu::HelperClasses::ItemComponent::RTTI_Type_Descriptor,0)
        ;
        if ((iVar7 == 0) && (iVar5 != 0)) {
          iVar7 = FUN_004f8b05();
        }
        iVar8 = FUN_004f7a5c();
        if (iVar7 != iVar8) {
          if (cVar3 == '\0') {
            iVar5 = *(int *)(*(int *)(in_EAX + 0x14) + 0xd4);
            if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x68) & 2) != 0)) {
              return;
            }
          }
          else if ((iVar5 != 0) && (*(int *)(*(int *)(in_EAX + 0x14) + 0xd4) != 0)) {
            FUN_004e09c5(1);
          }
          FUN_004e179b(*(undefined4 *)(in_EAX + 0x14));
        }
      }
    }
  }
  return;
}

