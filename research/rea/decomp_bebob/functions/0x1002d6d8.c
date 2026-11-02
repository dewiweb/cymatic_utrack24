// rea decompile_all
// name: FUN_1002d6d8
// address: 0x1002d6d8
// body: available
// range: 0x1002d6d8-0x1002d8d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002d6ea to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_1002d6d8(void *this,uint param_1,int param_2,int param_3)

{
  HMODULE hModule;
  double dVar1;
  AFX_MODULE_STATE *pAVar2;
  HRSRC hResInfo;
  int iVar3;
  HGLOBAL hResData;
  LPVOID pvVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  uint uVar9;
  ulonglong uVar10;
  int local_18;
  int local_14;
  ushort *local_8;
  
  if (param_1 == 0) {
LAB_1002d6ea:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  pAVar2 = AfxGetModuleState();
  hModule = *(HMODULE *)(pAVar2 + 0xc);
  hResInfo = FindResourceW(hModule,(LPCWSTR)(param_1 & 0xffff),(LPCWSTR)0xf1);
  if (((hResInfo == (HRSRC)0x0) ||
      (hResData = LoadResource(hModule,hResInfo), hResData == (HGLOBAL)0x0)) ||
     (pvVar4 = LockResource(hResData), pvVar4 == (LPVOID)0x0)) {
    iVar3 = 0;
  }
  else {
    pvVar5 = FUN_1000858a((uint)*(ushort *)((int)pvVar4 + 6) * 4);
    if (pvVar5 == (void *)0x0) goto LAB_1002d6ea;
    uVar8 = (uint)*(ushort *)((int)pvVar4 + 4);
    uVar9 = (uint)*(ushort *)((int)pvVar4 + 2);
    local_18 = uVar9 + 6;
    local_14 = uVar8 + 6;
    iVar3 = DAT_10166e70;
    if (param_3 != 0) {
      iVar3 = *(int *)((int)this + 0xbbc);
    }
    if (iVar3 == 0) {
      dVar1 = 1.0;
      if (DAT_10166c84 != 0) {
        dVar1 = _DAT_10166c7c;
      }
      if (dVar1 != 1.0) {
        uVar10 = FUN_100f8660(uVar8,DAT_10166c84);
        local_18 = (int)uVar10;
        uVar10 = FUN_100f8660(extraout_ECX,(int)(uVar10 >> 0x20));
        local_14 = (int)uVar10;
      }
    }
    if (param_3 == 0) {
      iVar3 = CMFCToolBarImages::IsScaled((CMFCToolBarImages *)&DAT_10166f30);
      if (iVar3 == 0) {
        FUN_10025ba9(extraout_ECX_00,extraout_EDX,local_18,local_14,uVar9,uVar8);
      }
    }
    else {
      FUN_10025d25(this,local_18,local_14,uVar9,uVar8,0);
    }
    iVar3 = 1;
    if (*(int *)(param_2 + 4) == 0) {
      *(uint *)(param_2 + 4) = param_1;
    }
    if ((*(int *)((int)this + 0xca4) != 0) ||
       (iVar6 = (**(code **)(*(int *)this + 0x334))(param_2,param_3), iVar6 != 0)) {
      param_2 = *(int *)((int)this + 0xb90);
      iVar3 = 0;
      if (*(short *)((int)pvVar4 + 6) != 0) {
        local_8 = (ushort *)((int)pvVar4 + 8);
        do {
          uVar8 = (uint)*local_8;
          *(uint *)((int)pvVar5 + iVar3 * 4) = uVar8;
          if ((param_3 == 0) && (uVar8 != 0)) {
            piVar7 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                               ((CMap<unsigned_int,unsigned_int,int,int> *)&PTR_vftable_1016041c,
                                uVar8);
            *piVar7 = param_2;
            param_2 = param_2 + 1;
          }
          local_8 = local_8 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)*(ushort *)((int)pvVar4 + 6));
      }
      *(uint *)((int)this + 0xca4) = param_1;
      iVar3 = (**(code **)(*(int *)this + 0x33c))(pvVar5,*(undefined2 *)((int)pvVar4 + 6),1);
      if (iVar3 == 0) {
        *(undefined4 *)((int)this + 0xca4) = 0;
      }
    }
    FUN_100085b9(pvVar5);
    FreeResource(hResData);
  }
  return iVar3;
}

