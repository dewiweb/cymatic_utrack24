// rea decompile_all
// name: FUN_0043efb3
// address: 0x43efb3
// body: available
// range: 0x43efb3-0x43f0d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043efb3(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  float local_10;
  
  iVar2 = *(int *)(in_ECX + 0xc);
  while ((iVar1 = 0, iVar2 != 0 &&
         (iVar1 = FUN_005cdbcf(iVar2,0,&juce::Component::RTTI_Type_Descriptor,
                               &MySlider::RTTI_Type_Descriptor,0), iVar1 == 0))) {
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  FUN_004c0902(in_ECX,*param_1,param_1[1]);
  iVar2 = FUN_005b3fb0();
  local_10 = ((*(float *)(iVar1 + 0x74) - *(float *)(iVar1 + 0x70)) *
             (float)(iVar2 - *(int *)(iVar1 + 0x84))) / (float)*(int *)(iVar1 + 0x8c) +
             *(float *)(iVar1 + 0x70);
  if (0.0 < *(float *)(iVar1 + 0x78)) {
    fVar3 = (float10)FUN_005af8c0((double)((local_10 - *(float *)(iVar1 + 0x70)) /
                                           *(float *)(iVar1 + 0x78) + 0.5));
    local_10 = (float)(fVar3 * (float10)*(float *)(iVar1 + 0x78) + (float10)*(float *)(iVar1 + 0x70)
                      );
  }
  if (local_10 < *(float *)(iVar1 + 0x70)) {
    local_10 = *(float *)(iVar1 + 0x70);
  }
  if (*(float *)(iVar1 + 0x74) < local_10) {
    local_10 = *(float *)(iVar1 + 0x74);
  }
  iVar2 = *(int *)(in_ECX + 0x78);
  while (0 < iVar2) {
    iVar2 = iVar2 + -1;
    if ((*(int *)(in_ECX + 0x78) <= iVar2) && (iVar2 = *(int *)(in_ECX + 0x78) + -1, iVar2 < 0))
    break;
    FUN_004f9b3e(iVar1,local_10);
  }
  *(float *)(iVar1 + 0x7c) = local_10;
  FUN_0043ecf4();
  return;
}

