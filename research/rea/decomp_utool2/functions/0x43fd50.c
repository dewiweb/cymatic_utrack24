// rea decompile_all
// name: FUN_0043fd50
// address: 0x43fd50
// body: available
// range: 0x43fd50-0x43ff3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043fd50(FARPROC param_1)

{
  LPCSTR pCVar1;
  FARPROC pFVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  HMODULE pHVar5;
  int iVar6;
  undefined4 *in_ECX;
  int *piVar7;
  int *piVar8;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006feb71;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = FUN_00637250(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  FUN_00602db0(param_1,uVar3);
  local_8 = 0;
  piVar7 = (int *)(local_14 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  *in_ECX = juce::WindowsMediaCodec::WMAudioReader::vftable;
  FUN_0045c990("Wmvcore.dll");
  local_8 = CONCAT31(local_8._1_3_,1);
  in_ECX[0x14] = 0;
  puVar4 = (undefined4 *)FUN_00458890();
  pHVar5 = LoadLibraryW((LPCWSTR)*puVar4);
  in_ECX[0x14] = pHVar5;
  piVar7 = (int *)(param_1 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  piVar7 = in_ECX + 0x15;
  *piVar7 = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  FUN_0045c990("WMCreateSyncReader");
  pCVar1 = (LPCSTR)param_1;
  if ((HMODULE)in_ECX[0x14] == (HMODULE)0x0) {
    param_1 = (FARPROC)0x0;
  }
  else {
    param_1 = GetProcAddress((HMODULE)in_ECX[0x14],(LPCSTR)param_1);
  }
  piVar8 = (int *)(pCVar1 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  pFVar2 = param_1;
  if (param_1 != (FARPROC)0x0) {
    CoInitialize((LPVOID)0x0);
    piVar8 = (int *)*piVar7;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 8))(piVar8);
    }
    *piVar7 = 0;
    iVar6 = (*pFVar2)(0,1,piVar7);
    if (-1 < iVar6) {
      puVar4 = operator_new(0xc);
      uVar3 = in_ECX[0x11];
      puVar4[1] = 0;
      *puVar4 = juce::WindowsMediaCodec::JuceIStream::vftable;
      puVar4[2] = uVar3;
      iVar6 = (**(code **)(*(int *)*piVar7 + 0x5c))((int *)*piVar7,puVar4);
      if (-1 < iVar6) {
        param_1 = (FARPROC)0x1;
        (**(code **)(*(int *)*piVar7 + 0x50))((int *)*piVar7,0,&param_1);
        (**(code **)(*(int *)*piVar7 + 0x28))((int *)*piVar7,param_1,0);
        FUN_00440330();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

