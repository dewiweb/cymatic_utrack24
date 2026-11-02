// rea decompile_all
// name: FUN_004dedc7
// address: 0x4dedc7
// body: available
// range: 0x4dedc7-0x4df04c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dedc7(undefined4 param_1,char param_2,char param_3)

{
  float fVar1;
  float fVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  char cVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  TypeDescriptor *pTVar8;
  float10 fVar9;
  TypeDescriptor *local_60;
  TypeDescriptor *local_5c;
  undefined1 *local_30;
  undefined1 local_2c [40];
  
  local_5c = (TypeDescriptor *)0x4dede3;
  FUN_004d076d();
  for (iVar7 = *(int *)(in_ECX + 0xc); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0xc)) {
    local_5c = (TypeDescriptor *)0x0;
    local_60 = &juce::ResizableWindow::RTTI_Type_Descriptor;
    iVar6 = FUN_005cdbcf(iVar7,0,&juce::Component::RTTI_Type_Descriptor);
    if (iVar6 != 0) {
      local_5c = (TypeDescriptor *)&local_30;
      local_60 = (TypeDescriptor *)0x4dee1c;
      FUN_004ef475();
      local_5c = (TypeDescriptor *)0x4dee27;
      FUN_004d076d();
      break;
    }
  }
  local_30 = *(undefined1 **)(in_ECX + 0x1c);
  pTVar3 = (TypeDescriptor *)((float)*(int *)(in_ECX + 0x18) * 0.5);
  pTVar4 = (TypeDescriptor *)((float)(int)local_30 * 0.5);
  if (param_3 == '\0') {
    fVar1 = 0.65;
  }
  else {
    fVar1 = 0.6;
  }
  local_60 = pTVar3;
  local_5c = pTVar4;
  fVar9 = (float10)FUN_0043d2e1();
  local_30 = (undefined1 *)&local_5c;
  fVar1 = (float)(fVar9 * (float10)fVar1);
  local_60 = (TypeDescriptor *)0x4dee97;
  FUN_004d076d();
  local_60 = (TypeDescriptor *)0x4deea1;
  FUN_0047cda7();
  pTVar8 = (TypeDescriptor *)(fVar1 + fVar1);
  local_2c._4_8_ = (undefined8)(float)pTVar8;
  local_30 = (undefined1 *)((float)pTVar3 - fVar1);
  local_60 = pTVar8;
  local_5c = pTVar8;
  FUN_0047d49c(local_30,(float)pTVar4 - fVar1);
  local_2c._0_4_ = &local_60;
  local_5c = (TypeDescriptor *)0x3f19999a;
  FUN_004d076d();
  FUN_00476606();
  local_5c = (TypeDescriptor *)0x4def25;
  cVar5 = FUN_004c3153();
  if (cVar5 == '\0') {
    local_60 = (TypeDescriptor *)local_2c;
    local_5c = (TypeDescriptor *)0x3f19999a;
    FUN_0047620f();
  }
  else {
    if (param_2 == '\0') goto LAB_004def6a;
    local_60 = (TypeDescriptor *)local_2c;
    local_5c = (TypeDescriptor *)0x3ecccccd;
    FUN_004764ae();
  }
  local_5c = (TypeDescriptor *)0x4def6a;
  FUN_004d076d();
LAB_004def6a:
  local_2c._0_4_ = &local_5c;
  local_60 = (TypeDescriptor *)0x4def7a;
  FUN_004d076d();
  local_60 = (TypeDescriptor *)0x4def81;
  FUN_0047cda7();
  local_5c = (TypeDescriptor *)(fVar1 * 0.2);
  local_60 = pTVar8;
  FUN_0047d4c6(param_1,local_30,(float)pTVar4 - fVar1,pTVar8);
  local_60 = (TypeDescriptor *)0x4defc5;
  cVar5 = FUN_004bf38c();
  if (cVar5 == '\0') {
    pTVar8 = (TypeDescriptor *)(in_ECX + 0xe0);
  }
  else {
    pTVar8 = (TypeDescriptor *)(in_ECX + 0x100);
  }
  local_60 = (TypeDescriptor *)0x1;
  fVar2 = (float)((float10)(double)local_2c._4_8_ * (float10)0.550000011920929);
  fVar9 = (float10)0.550000011920929 * (float10)fVar1;
  local_5c = (TypeDescriptor *)0x24;
  local_30 = (undefined1 *)(float)((float10)(float)pTVar3 - fVar9);
  local_2c._0_4_ = &local_5c;
  local_5c = (TypeDescriptor *)
             FUN_0047a633(local_30,(float)((float10)(float)pTVar4 - fVar9),fVar2,fVar2);
  local_60 = pTVar8;
  FUN_0047d2ae();
  return;
}

