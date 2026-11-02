// rea decompile_all
// name: FUN_004c62d4
// address: 0x4c62d4
// body: available
// range: 0x4c62d4-0x4c63c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_004c62d4(int *param_1,TypeDescriptor *param_2,undefined4 param_3)

{
  char cVar1;
  TypeDescriptor *pTVar2;
  int *piVar3;
  undefined4 *puVar4;
  TypeDescriptor *in_ECX;
  undefined4 *unaff_EBX;
  TypeDescriptor *local_68;
  TypeDescriptor *local_64;
  TypeDescriptor *local_60;
  undefined1 *local_5c;
  int *local_40;
  undefined1 *local_3c;
  undefined1 local_38 [48];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x4c62e0;
  local_3c = (undefined1 *)&local_60;
  local_40 = param_1;
  if (in_ECX[1].spare == (void *)0x0) {
    local_60 = param_2;
    local_5c = (undefined1 *)param_3;
    local_64 = (TypeDescriptor *)0x4c6306;
    pTVar2 = (TypeDescriptor *)FUN_004c6285();
  }
  else {
    local_3c = (undefined1 *)&local_68;
    local_68 = param_2;
    local_64 = (TypeDescriptor *)param_3;
    local_60 = in_ECX;
    FUN_004c08d2(in_ECX[1].spare,0);
    local_64 = (TypeDescriptor *)0x4c632b;
    pTVar2 = (TypeDescriptor *)FUN_004c0f4a();
  }
  local_5c = (undefined1 *)0x4c633b;
  FUN_004c661d();
  local_8 = 0;
  do {
    if (pTVar2 == (TypeDescriptor *)0x0) {
      *local_40 = 0;
LAB_004c63a9:
      local_5c = (undefined1 *)0x4c63b1;
      FUN_00474d0f();
      local_5c = (undefined1 *)0x4c63b9;
      FUN_004615f7();
      local_5c = (undefined1 *)0x4c63c0;
      FUN_005b9f18();
      return;
    }
    local_5c = (undefined1 *)0x0;
    local_60 = &juce::DragAndDropTarget::RTTI_Type_Descriptor;
    local_64 = &juce::Component::RTTI_Type_Descriptor;
    local_68 = (TypeDescriptor *)0x0;
    piVar3 = (int *)FUN_005cdbcf(pTVar2);
    if (piVar3 != (int *)0x0) {
      local_5c = local_38;
      local_60 = (TypeDescriptor *)0x4c6369;
      cVar1 = (**(code **)(*piVar3 + 4))();
      if (cVar1 != '\0') {
        local_3c = (undefined1 *)&local_60;
        local_60 = param_2;
        local_64 = (TypeDescriptor *)0x0;
        local_5c = (undefined1 *)param_3;
        local_68 = pTVar2;
        puVar4 = (undefined4 *)FUN_004c08d2();
        *unaff_EBX = *puVar4;
        unaff_EBX[1] = puVar4[1];
        *local_40 = (int)pTVar2;
        goto LAB_004c63a9;
      }
    }
    pTVar2 = pTVar2[1].spare;
  } while( true );
}

