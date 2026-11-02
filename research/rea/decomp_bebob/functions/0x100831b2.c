// rea decompile_all
// name: CMFCToolBarImages::CopyTo
// address: 0x100831b2
// body: available
// range: 0x100831b2-0x1008356b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::CopyTo(class CMFCToolBarImages &)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBarImages::CopyTo(CMFCToolBarImages *this,CMFCToolBarImages *param_1)

{
  undefined4 *puVar1;
  HBITMAP pHVar2;
  HDC pHVar3;
  HANDLE pvVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  LONG *pLVar8;
  undefined1 local_e8 [4];
  int local_e4;
  long local_e0;
  WORD local_d8;
  ushort local_d6;
  CDC local_d0 [4];
  HDC local_cc;
  int local_c0;
  HGDIOBJ local_b8;
  void *local_b4;
  CDC local_b0 [4];
  HDC local_ac;
  HWND__ *local_a0;
  HGDIOBJ local_9c;
  HBITMAP local_98;
  undefined4 local_94;
  undefined1 local_90 [80];
  BITMAPINFO local_40;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xd8;
  local_8 = 0x100831c1;
  if (*(int *)(param_1 + 0x24) == 0) {
    if (*(int *)(param_1 + 0x88) != 0) {
      FUN_100822ef((int)param_1);
    }
    if (DAT_10166c14 == 0) {
      pvVar4 = CopyImage(*(HANDLE *)(this + 0x88),0,0,0,0x2000);
      *(HANDLE *)(param_1 + 0x88) = pvVar4;
      if (*(HANDLE *)(this + 0x8c) != (HANDLE)0x0) {
        pvVar4 = CopyImage(*(HANDLE *)(this + 0x8c),0,0,0,0x2000);
        *(HANDLE *)(param_1 + 0x8c) = pvVar4;
      }
      if (*(HANDLE *)(this + 0x90) != (HANDLE)0x0) {
        pvVar4 = CopyImage(*(HANDLE *)(this + 0x90),0,0,0,0x2000);
        *(HANDLE *)(param_1 + 0x90) = pvVar4;
      }
    }
    else {
      iVar6 = GetObjectW(*(HANDLE *)(this + 0x88),0x18,local_e8);
      if (iVar6 == 0x18) {
        local_a0 = (HWND__ *)_labs(local_e0);
        local_c0 = local_e4;
        FUN_1001714b((undefined4 *)local_b0);
        local_8 = 0;
        pHVar3 = CreateCompatibleDC((HDC)0x0);
        CDC::Attach(local_b0,pHVar3);
        if (*(HGDIOBJ *)(this + 0x88) == (HGDIOBJ)0x0) {
          local_9c = (HGDIOBJ)0x0;
        }
        else {
          local_9c = SelectObject(local_ac,*(HGDIOBJ *)(this + 0x88));
        }
        if (local_9c != (HGDIOBJ)0x0) {
          local_94 = 0;
          _memset(local_90,0,0x50);
          if ((local_d6 < 0x18) ||
             (iVar6 = GetObjectW(*(HANDLE *)(this + 0x88),0x54,&local_94), iVar6 == 0)) {
            local_98 = CreateCompatibleBitmap(local_ac,local_c0,(int)local_a0);
          }
          else {
            pLVar8 = &local_40.bmiHeader.biWidth;
            for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
              *pLVar8 = 0;
              pLVar8 = pLVar8 + 1;
            }
            local_40.bmiHeader.biWidth = local_e4;
            local_40.bmiHeader.biHeight = local_e0;
            local_40.bmiHeader.biPlanes = local_d8;
            local_40.bmiHeader.biBitCount = local_d6;
            local_40.bmiHeader.biCompression = 0;
            local_b4 = (void *)0x0;
            local_40.bmiHeader.biSize = 0x28;
            local_98 = CreateDIBSection(local_ac,&local_40,0,&local_b4,(HANDLE)0x0,0);
          }
          if (local_98 != (HBITMAP)0x0) {
            FUN_1001714b((undefined4 *)local_d0);
            local_8 = CONCAT31(local_8._1_3_,1);
            pHVar3 = CreateCompatibleDC(local_ac);
            CDC::Attach(local_d0,pHVar3);
            local_b8 = SelectObject(local_cc,local_98);
            if (local_b8 == (HGDIOBJ)0x0) {
              DeleteObject(local_98);
            }
            else {
              BitBlt(local_cc,0,0,local_c0,(int)local_a0,local_ac,0,0,0xcc0020);
              SelectObject(local_cc,local_b8);
              *(HBITMAP *)(param_1 + 0x88) = local_98;
            }
            local_8 = local_8 & 0xffffff00;
            CDC::~CDC(local_d0);
          }
          SelectObject(local_ac,local_9c);
        }
        local_8 = 0xffffffff;
        CDC::~CDC(local_b0);
      }
    }
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(this + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(this + 0x54);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(this + 0x60);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(this + 100);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x14);
    FUN_10007c90(param_1 + 0x94,(undefined4 *)(this + 0x94));
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(this + 0xa4);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(this + 0x20);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(this + 0xac);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(this + 0x28);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 8);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(this + 0xb0);
    pHVar2 = *(HBITMAP *)(this + 0xbc);
    while (pHVar2 != (HBITMAP)0x0) {
      local_98 = (HBITMAP)pHVar2->unused;
      local_a0 = (HWND__ *)pHVar2[2].unused;
      CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(param_1 + 0xb8),local_a0);
      local_9c = (HGDIOBJ)0xffffffff;
      iVar6 = CMap<unsigned_int,unsigned_int,int,int>::Lookup
                        ((CMap<unsigned_int,unsigned_int,int,int> *)(this + 0xf0),(uint)local_a0,
                         (int *)&local_9c);
      pHVar2 = local_98;
      if (iVar6 != 0) {
        piVar5 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                           ((CMap<unsigned_int,unsigned_int,int,int> *)(param_1 + 0xf0),
                            (uint)local_a0);
        *piVar5 = (int)local_9c;
        pHVar2 = local_98;
      }
    }
    puVar7 = *(undefined4 **)(this + 0xd8);
    while (puVar7 != (undefined4 *)0x0) {
      puVar1 = puVar7 + 2;
      puVar7 = (undefined4 *)*puVar7;
      CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(param_1 + 0xd4),(HWND__ *)*puVar1);
    }
  }
  iVar6 = FUN_100f90cf();
  return iVar6;
}

