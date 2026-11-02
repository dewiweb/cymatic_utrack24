// rea decompile_all
// name: CMFCToolBarImages::MirrorBitmapVert
// address: 0x1008162f
// body: available
// range: 0x1008162f-0x1008188f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: static int __stdcall CMFCToolBarImages::MirrorBitmapVert(struct HBITMAP__ * &,int)
   
   Library: Visual Studio 2010 Release */

int CMFCToolBarImages::MirrorBitmapVert(HBITMAP__ **param_1,int param_2)

{
  int iVar1;
  HDC pHVar2;
  COLORREF color;
  size_t _Size;
  undefined1 local_b8 [4];
  void *local_b4;
  int local_b0;
  ushort local_a6;
  COLORREF local_a0;
  CDC local_9c [4];
  HDC local_98;
  int local_8c;
  void *local_88;
  void *local_84;
  void *local_80;
  HGDIOBJ local_7c;
  HGDIOBJ local_78;
  void *local_74;
  void *local_70;
  void *local_6c;
  undefined1 local_68 [18];
  ushort local_56;
  void *local_54;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa8;
  local_8 = 0x1008163e;
  local_8c = param_2;
  if ((*param_1 != (HBITMAP__ *)0x0) && (iVar1 = GetObjectW(*param_1,0x18,local_b8), iVar1 != 0)) {
    local_74 = local_b4;
    local_6c = (void *)(local_b0 / param_2);
    if (local_a6 < 0x10) {
      FUN_1001714b((undefined4 *)local_9c);
      local_8 = 0;
      pHVar2 = CreateCompatibleDC((HDC)0x0);
      CDC::Attach(local_9c,pHVar2);
      if (*param_1 == (HBITMAP__ *)0x0) {
        local_7c = (HGDIOBJ)0x0;
      }
      else {
        local_7c = SelectObject(local_98,*param_1);
      }
      if (local_7c != (HGDIOBJ)0x0) {
        if (0 < (int)local_6c) {
          local_78 = (HGDIOBJ)(param_2 / 2);
          local_80 = (void *)0x0;
          local_88 = local_6c;
          do {
            local_6c = local_80;
            local_70 = (void *)((int)local_80 + param_2 + -1);
            if (0 < (int)local_78) {
              local_84 = local_78;
              do {
                iVar1 = 0;
                if (0 < (int)local_74) {
                  do {
                    local_a0 = GetPixel(local_98,iVar1,(int)local_6c);
                    color = GetPixel(local_98,iVar1,(int)local_70);
                    SetPixel(local_98,iVar1,(int)local_6c,color);
                    SetPixel(local_98,iVar1,(int)local_70,local_a0);
                    iVar1 = iVar1 + 1;
                  } while (iVar1 < (int)local_74);
                }
                local_6c = (void *)((int)local_6c + 1);
                local_70 = (void *)((int)local_70 + -1);
                local_84 = (void *)((int)local_84 + -1);
              } while (local_84 != (HGDIOBJ)0x0);
              local_84 = (void *)0x0;
              param_2 = local_8c;
            }
            local_80 = (void *)((int)local_80 + param_2);
            local_88 = (void *)((int)local_88 + -1);
          } while (local_88 != (void *)0x0);
        }
        SelectObject(local_98,local_7c);
      }
      local_8 = 0xffffffff;
      CDC::~CDC(local_9c);
    }
    else {
      iVar1 = GetObjectW(*param_1,0x54,local_68);
      if (((iVar1 != 0) && (local_56 == local_a6)) && (local_54 != (void *)0x0)) {
        local_88 = local_54;
        _Size = (int)(((int)((uint)local_56 * (int)local_74) >> 0x1f & 7U) +
                     (uint)local_56 * (int)local_74) >> 3;
        if ((_Size & 3) != 0) {
          _Size = (_Size & 0xfffffffc) + 4;
        }
        local_74 = FUN_1000858a(_Size);
        if (0 < (int)local_6c) {
          local_78 = (HGDIOBJ)(local_8c / 2);
          iVar1 = local_8c * _Size;
          local_84 = local_6c;
          local_80 = local_88;
          do {
            local_6c = (void *)((int)local_80 + (param_2 + -1) * _Size);
            local_70 = local_80;
            if (0 < (int)local_78) {
              local_7c = local_78;
              do {
                FID_conflict__memcpy(local_74,local_70,_Size);
                FID_conflict__memcpy(local_70,local_6c,_Size);
                FID_conflict__memcpy(local_6c,local_74,_Size);
                local_70 = (void *)((int)local_70 + _Size);
                local_6c = (void *)((int)local_6c - _Size);
                local_7c = (HGDIOBJ)((int)local_7c + -1);
              } while (local_7c != (HGDIOBJ)0x0);
            }
            local_80 = (void *)((int)local_80 + iVar1);
            local_84 = (void *)((int)local_84 + -1);
          } while (local_84 != (void *)0x0);
        }
        FUN_100085b9(local_74);
      }
    }
  }
  iVar1 = FUN_100f90cf();
  return iVar1;
}

