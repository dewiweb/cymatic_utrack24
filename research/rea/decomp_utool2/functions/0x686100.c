// rea decompile_all
// name: FUN_00686100
// address: 0x686100
// body: available
// range: 0x686100-0x6861bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00686100(DWORD param_1)

{
  IDataObject *pIVar1;
  _func_5420 **pp_Var2;
  IDataObjectVtbl *pDropSource;
  HRESULT HVar3;
  IDataObjectVtbl *in_ECX;
  IDataObjectVtbl *in_EDX;
  DWORD local_c;
  IDataObjectVtbl *local_8;
  
  pDropSource = operator_new(8);
  pDropSource->AddRef = (_func_5420 *)0x1;
  pDropSource->QueryInterface = (_func_5419 *)juce::DragAndDropHelpers::JuceDropSource::vftable;
  local_8 = pDropSource;
  local_8 = operator_new(0x14);
  ((LPDATAOBJECT)((int)local_8 + 4))->lpVtbl = (IDataObjectVtbl *)0x1;
  ((LPDATAOBJECT)local_8)->lpVtbl =
       (IDataObjectVtbl *)juce::DragAndDropHelpers::JuceDataObject::vftable;
  ((LPDATAOBJECT)((int)local_8 + 8))->lpVtbl = pDropSource;
  ((LPDATAOBJECT)((int)local_8 + 0xc))->lpVtbl = in_ECX;
  ((LPDATAOBJECT)((int)local_8 + 0x10))->lpVtbl = in_EDX;
  HVar3 = DoDragDrop((LPDATAOBJECT)local_8,(LPDROPSOURCE)pDropSource,param_1,&local_c);
  if ((IDataObjectVtbl *)local_8->QueryInterface ==
      (IDataObjectVtbl *)juce::DragAndDropHelpers::JuceDataObject::vftable) {
    pIVar1 = (IDataObject *)((int)local_8 + 4);
    pIVar1->lpVtbl = (IDataObjectVtbl *)((int)&pIVar1->lpVtbl[-1].EnumDAdvise + 3);
    if (pIVar1->lpVtbl == (IDataObjectVtbl *)0x0) {
      FUN_004ad470(1);
    }
  }
  else {
    (*((IDataObjectVtbl *)local_8->QueryInterface)->Release)((IDataObject *)local_8);
  }
  if ((IDropSourceVtbl *)pDropSource->QueryInterface ==
      (IDropSourceVtbl *)juce::DragAndDropHelpers::JuceDropSource::vftable) {
    pp_Var2 = &pDropSource->AddRef;
    *pp_Var2 = *pp_Var2 + -1;
    if (*pp_Var2 == (_func_5420 *)0x0) {
      FUN_004ad410(1);
      return HVar3 == 0x40100;
    }
  }
  else {
    (*((IDropSourceVtbl *)pDropSource->QueryInterface)->Release)((IDropSource *)pDropSource);
  }
  return HVar3 == 0x40100;
}

