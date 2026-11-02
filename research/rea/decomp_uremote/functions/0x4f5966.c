// rea decompile_all
// name: FUN_004f5966
// address: 0x4f5966
// body: available
// range: 0x4f5966-0x4f59e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004f5966(IDataObjectVtbl *param_1,IDataObjectVtbl *param_2,DWORD param_3)

{
  IDataObjectVtbl *pDropSource;
  LPDATAOBJECT pDataObj;
  HRESULT HVar1;
  DWORD local_8;
  
  pDropSource = (IDataObjectVtbl *)FUN_005af82d(8);
  if (pDropSource == (IDataObjectVtbl *)0x0) {
    pDropSource = (IDataObjectVtbl *)0x0;
  }
  else {
    pDropSource->AddRef = (_func_5420 *)0x1;
    pDropSource->QueryInterface = (_func_5419 *)juce::DragAndDropHelpers::JuceDropSource::vftable;
  }
  pDataObj = (LPDATAOBJECT)FUN_005af82d(0x14);
  if (pDataObj == (LPDATAOBJECT)0x0) {
    pDataObj = (LPDATAOBJECT)0x0;
  }
  else {
    pDataObj[3].lpVtbl = param_1;
    pDataObj[1].lpVtbl = (IDataObjectVtbl *)0x1;
    pDataObj->lpVtbl = (IDataObjectVtbl *)juce::DragAndDropHelpers::JuceDataObject::vftable;
    pDataObj[2].lpVtbl = pDropSource;
    pDataObj[4].lpVtbl = param_2;
  }
  HVar1 = DoDragDrop(pDataObj,(LPDROPSOURCE)pDropSource,param_3,&local_8);
  (*pDataObj->lpVtbl->Release)(pDataObj);
  (*((IDropSourceVtbl *)pDropSource->QueryInterface)->Release)((IDropSource *)pDropSource);
  return HVar1 == 0x40100;
}

