// rea decompile_all
// name: FUN_004bba80
// address: 0x4bba80
// body: available
// range: 0x4bba80-0x4bbb4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bba80(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_EDX;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  undefined4 *local_8;
  
  local_8 = operator_new(0x1c);
  iVar4 = in_EDX[4];
  iVar1 = in_EDX[5];
  *local_8 = juce::OpenGLFrameBufferImage::
             DataReleaser<juce::OpenGLFrameBufferImage::Reader,juce::OpenGLFrameBufferImage::Writer>
             ::vftable;
  uVar3 = FUN_004c554b(iVar4 * iVar1 * 4);
  local_8[1] = uVar3;
  local_8[2] = local_c;
  local_8[3] = param_1;
  local_8[4] = param_2;
  local_8[5] = iVar4;
  local_8[6] = iVar1;
  puVar2 = (undefined4 *)in_EDX[6];
  if ((puVar2 != local_8) && (in_EDX[6] = local_8, puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  local_14 = in_EDX[4];
  *in_EDX = local_8[1];
  in_EDX[2] = in_EDX[3] * local_14 + 3U & 0xfffffffc;
  if (*local_c == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*local_c + 8);
  }
  local_1c = param_1;
  local_10 = in_EDX[5];
  local_18 = (iVar4 - local_10) - param_2;
  FUN_006f4d50(*in_EDX,&local_1c);
  FUN_004bb020(in_EDX[5]);
  return;
}

