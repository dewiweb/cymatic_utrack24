// rea decompile_all
// name: CMFCToolBarImages::AddImage
// address: 0x10085151
// body: available
// range: 0x10085151-0x100855a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::AddImage(struct HBITMAP__ *,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBarImages::AddImage(CMFCToolBarImages *this,HBITMAP__ *param_1,int param_2)

{
  int iVar1;
  HDC pHVar2;
  HBITMAP__ *h;
  code *pcVar3;
  undefined1 local_190 [4];
  int local_18c;
  int local_188;
  ushort local_17e;
  undefined1 local_178 [4];
  int local_174;
  int local_170;
  ushort local_166;
  CDC local_160 [4];
  HDC local_15c;
  int local_150;
  int local_14c;
  int local_148;
  CDC local_144 [4];
  HDC local_140;
  HBITMAP local_134;
  int local_130;
  int local_12c;
  HBITMAP__ *local_128;
  HGDIOBJ local_124;
  CMFCToolBarImages local_120 [4];
  int local_11c;
  uint local_118;
  undefined4 local_fc;
  undefined4 local_d0;
  undefined4 local_cc;
  HBITMAP__ *local_98;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x180;
  local_8 = 0x10085160;
  local_128 = param_1;
  if (*(int *)(this + 0x24) != 0) goto LAB_10085175;
  local_150 = 0;
  if (DAT_10168920 != 0) {
    local_150 = 1;
    local_128 = CopyImage(param_1,0,0,0,0x2000);
    MirrorBitmap(&local_128,*(int *)(this + 0x50));
  }
  h = local_128;
  iVar1 = IsScaled(this);
  if (iVar1 != 0) {
    iVar1 = GetObjectW(h,0x18,local_190);
    if (iVar1 == 0) goto LAB_10085175;
    if (local_188 != *(int *)(this + 0x54)) {
      CMFCToolBarImages(local_120);
      local_118 = (uint)local_17e;
      local_d0 = *(undefined4 *)(this + 0x58);
      local_cc = *(undefined4 *)(this + 0x5c);
      local_11c = local_18c / *(int *)(this + 0x58);
      local_8 = 0;
      local_98 = h;
      FUN_100823f8(local_120,local_18c % *(int *)(this + 0x58),(int)*(undefined8 *)(this + 0xb0),
                   (uint)((ulonglong)*(undefined8 *)(this + 0xb0) >> 0x20));
      local_fc = 1;
      DeleteObject(h);
      local_8 = 0xffffffff;
      local_128 = local_98;
      ~CMFCToolBarImages(local_120);
      h = local_128;
    }
  }
  FUN_1001714b((undefined4 *)local_144);
  local_8 = 1;
  pHVar2 = CreateCompatibleDC((HDC)0x0);
  CDC::Attach(local_144,pHVar2);
  iVar1 = GetObjectW(h,0x18,local_178);
  if (iVar1 != 0) {
    if (param_2 != 0) {
      *(uint *)(this + 8) = (uint)local_166;
    }
    pcVar3 = SelectObject_exref;
    local_14c = local_174;
    local_130 = local_170;
    if (*(HANDLE *)(this + 0x88) == (HANDLE)0x0) {
      local_12c = 0;
      if (h == (HBITMAP__ *)0x0) {
        local_124 = (HGDIOBJ)0x0;
      }
      else {
        local_124 = SelectObject(local_140,local_128);
      }
      if (local_124 != (HGDIOBJ)0x0) {
LAB_10085393:
        local_134 = CreateCompatibleBitmap(local_140,local_12c + local_14c,local_130);
        if (local_134 == (HBITMAP)0x0) {
          if (local_124 != (HGDIOBJ)0x0) {
            (*pcVar3)(local_140,local_124);
          }
        }
        else {
          FUN_1001714b((undefined4 *)local_160);
          local_8 = CONCAT31(local_8._1_3_,2);
          pHVar2 = CreateCompatibleDC(local_140);
          CDC::Attach(local_160,pHVar2);
          local_148 = (*pcVar3)(local_15c);
          if (local_148 != 0) {
            if (*(int *)(this + 0x88) != 0) {
              BitBlt(local_15c,0,0,local_12c,local_130,local_140,0,0,0xcc0020);
            }
            if (local_128 == (HBITMAP__ *)0x0) {
              iVar1 = 0;
            }
            else {
              iVar1 = (*pcVar3)(local_140);
            }
            if (iVar1 == 0) {
              (*pcVar3)(local_15c);
              if (local_124 != (HGDIOBJ)0x0) {
                (*pcVar3)(local_140);
              }
              DeleteObject(local_134);
            }
            else {
              BitBlt(local_15c,local_12c,0,local_14c,local_130,local_140,0,0,0xcc0020);
              (*pcVar3)(local_15c);
              if (local_124 != (HGDIOBJ)0x0) {
                (*pcVar3)(local_140);
              }
              if (*(HGDIOBJ *)(this + 0x88) != (HGDIOBJ)0x0) {
                DeleteObject(*(HGDIOBJ *)(this + 0x88));
              }
              *(HBITMAP *)(this + 0x88) = local_134;
              *(undefined4 *)(this + 0x18) = 1;
              UpdateCount(this);
              AfxDeleteObject((void **)(this + 0x8c));
              *(void **)(this + 0x8c) = (void *)0x0;
              AfxDeleteObject((void **)(this + 0x90));
              *(void **)(this + 0x90) = (void *)0x0;
              if (local_150 != 0) {
                DeleteObject(local_128);
              }
            }
            local_8 = CONCAT31(local_8._1_3_,1);
            CDC::~CDC(local_160);
            local_8 = 0xffffffff;
            CDC::~CDC(local_144);
            goto LAB_10085175;
          }
          if (local_124 != (HGDIOBJ)0x0) {
            (*pcVar3)(local_140);
          }
          DeleteObject(local_134);
          local_8 = CONCAT31(local_8._1_3_,1);
          CDC::~CDC(local_160);
        }
      }
    }
    else {
      iVar1 = GetObjectW(*(HANDLE *)(this + 0x88),0x18,local_178);
      pcVar3 = SelectObject_exref;
      if (iVar1 != 0) {
        if (*(HGDIOBJ *)(this + 0x88) == (HGDIOBJ)0x0) {
          local_124 = (HGDIOBJ)0x0;
        }
        else {
          local_124 = SelectObject(local_140,*(HGDIOBJ *)(this + 0x88));
        }
        if (local_124 != (HGDIOBJ)0x0) {
          local_12c = local_174;
          local_130 = local_170;
          goto LAB_10085393;
        }
      }
    }
  }
  local_8 = 0xffffffff;
  CDC::~CDC(local_144);
LAB_10085175:
  iVar1 = FUN_100f90cf();
  return iVar1;
}

