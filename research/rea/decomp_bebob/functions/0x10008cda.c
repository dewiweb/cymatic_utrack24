// rea decompile_all
// name: _AfxCopyStgMedium
// address: 0x10008cda
// body: available
// range: 0x10008cda-0x10008f5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10008e1c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    int __stdcall _AfxCopyStgMedium(unsigned short,struct tagSTGMEDIUM *,struct tagSTGMEDIUM *)
   
   Library: Visual Studio 2010 Release */

int _AfxCopyStgMedium(ushort param_1,tagSTGMEDIUM *param_2,tagSTGMEDIUM *param_3)

{
  rsize_t rVar1;
  DWORD DVar2;
  HBITMAP pHVar3;
  HANDLE pvVar4;
  LPVOID pvVar5;
  HMETAFILE pHVar6;
  void *pvVar7;
  int iVar8;
  uint local_64;
  void *local_60;
  undefined1 local_5c [8];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x10008ce6;
  if (param_2->tymed == 0) {
    DVar2 = param_3->tymed;
    if (DVar2 == 1) {
LAB_10008d28:
      param_2->tymed = DVar2;
    }
    else {
      if (DVar2 == 2) {
        param_2->tymed = 2;
        if ((param_3->u).lpszFileName == (LPCWSTR)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        local_64 = lstrlenW((param_3->u).lpszFileName);
        pvVar7 = ATL::AtlCoTaskMemCAlloc(local_64 + 1,2);
        (param_2->u).hMetaFilePict = pvVar7;
        if (pvVar7 != (void *)0x0) {
          rVar1 = local_64 * 2 + 2;
          FUN_10004cd0(pvVar7,rVar1,(param_3->u).hMetaFilePict,rVar1);
        }
        goto LAB_10008f55;
      }
      if (DVar2 == 4) {
        pHVar3 = (param_3->u).hBitmap;
        (param_2->u).hBitmap = pHVar3;
        (**(code **)(pHVar3->unused + 4))(pHVar3);
        param_2->tymed = 4;
        goto LAB_10008f55;
      }
      if (DVar2 == 8) {
        pHVar3 = (param_3->u).hBitmap;
        (param_2->u).hBitmap = pHVar3;
        (**(code **)(pHVar3->unused + 4))(pHVar3);
        param_2->tymed = 8;
        goto LAB_10008f55;
      }
      if (DVar2 != 0x10) {
        if (DVar2 == 0x20) {
          local_60 = _AfxCopyGlobalMemory((void *)0x0,(param_3->u).hMetaFilePict);
          if (local_60 != (void *)0x0) {
            pvVar5 = GlobalLock(local_60);
            pHVar6 = CopyMetaFileW(*(HMETAFILE *)((int)pvVar5 + 0xc),(LPCWSTR)0x0);
            pvVar7 = local_60;
            *(HMETAFILE *)((int)pvVar5 + 0xc) = pHVar6;
            if (pHVar6 == (HMETAFILE)0x0) {
              GlobalUnlock(local_60);
              GlobalFree(local_60);
            }
            else {
              GlobalUnlock(local_60);
              (param_2->u).hGlobal = pvVar7;
              param_2->tymed = 0x20;
            }
          }
          goto LAB_10008f55;
        }
        if (DVar2 != 0x40) goto LAB_10008f55;
        goto LAB_10008d28;
      }
      param_2->tymed = 0x10;
    }
    (param_2->u).hBitmap = (HBITMAP)0x0;
  }
  DVar2 = param_3->tymed;
  if (DVar2 == 1) {
    pvVar7 = _AfxCopyGlobalMemory((param_2->u).hMetaFilePict,(param_3->u).hMetaFilePict);
    if (pvVar7 != (void *)0x0) {
      (param_2->u).hMetaFilePict = pvVar7;
    }
  }
  else if (DVar2 == 2) {
    FUN_10006ce0(&local_64,(param_3->u).lpszFileName);
    local_8 = 0;
    FUN_10006ce0(&local_60,(param_2->u).lpszFileName);
    CopyFileW((LPCWSTR)(-(uint)((param_3->u).hBitmap != (HBITMAP)0x0) & local_64),
              (LPCWSTR)(-(uint)((param_2->u).hBitmap != (HBITMAP)0x0) & (uint)local_60),0);
    FUN_10001030((undefined4 *)((int)local_60 + -0x10));
    FUN_10001030((undefined4 *)(local_64 - 0x10));
  }
  else if (DVar2 == 4) {
    iVar8 = (**(code **)(((param_3->u).hBitmap)->unused + 0x30))((param_3->u).hBitmap,local_5c,1);
    if (iVar8 == 0) {
      (**(code **)(((param_2->u).hBitmap)->unused + 0x14))((param_2->u).hBitmap,0,0,0,0);
      (**(code **)(((param_3->u).hBitmap)->unused + 0x14))((param_3->u).hBitmap,0,0,0,0);
      iVar8 = (**(code **)(((param_3->u).hBitmap)->unused + 0x1c))
                        ((param_3->u).hBitmap,(param_2->u).hBitmap,local_54,local_50,0,0);
      if (iVar8 == 0) {
        (**(code **)(((param_2->u).hBitmap)->unused + 0x14))((param_2->u).hBitmap,0,0,0,0);
        (**(code **)(((param_3->u).hBitmap)->unused + 0x14))((param_3->u).hBitmap,0,0,0,0);
      }
    }
  }
  else if (DVar2 == 8) {
    (**(code **)(((param_3->u).hBitmap)->unused + 0x1c))
              ((param_3->u).hBitmap,0,0,0,(param_2->u).hBitmap);
  }
  else if (((DVar2 == 0x10) || (DVar2 == 0x40)) && ((param_2->u).hBitmap == (HBITMAP)0x0)) {
    pvVar4 = OleDuplicateData((param_3->u).hMetaFilePict,param_1,0);
    (param_2->u).hMetaFilePict = pvVar4;
  }
LAB_10008f55:
  iVar8 = FUN_100f90cf();
  return iVar8;
}

