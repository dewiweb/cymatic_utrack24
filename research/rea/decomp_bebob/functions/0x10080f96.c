// rea decompile_all
// name: CMFCToolBarImages::GrayImages
// address: 0x10080f96
// body: available
// range: 0x10080f96-0x100813b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::GrayImages(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBarImages::GrayImages(CMFCToolBarImages *this,int param_1)

{
  HDC pHVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_stack_fffffee4;
  undefined1 local_10c [4];
  int local_108;
  undefined4 local_104;
  double local_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  HGDIOBJ local_dc;
  void *local_d8;
  double local_d4;
  CDC local_cc [4];
  HDC local_c8;
  CDC local_bc [4];
  HDC local_b8;
  undefined8 local_ac;
  HBITMAP local_a4;
  HGDIOBJ local_a0;
  ulong local_9c;
  int local_98;
  undefined1 local_94 [4];
  int local_90;
  int local_8c;
  short local_82;
  int local_80;
  BITMAPINFO local_40;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xfc;
  local_8 = 0x10080fa5;
  *(undefined4 *)(this + 0x2c) = 1;
  *(int *)(this + 0xc) = param_1;
  if ((*(int *)(this + 0x88) == 0) || (DAT_10166c4c < 9)) goto LAB_10081011;
  FUN_1001714b((undefined4 *)local_bc);
  local_8 = 0;
  pHVar1 = CreateCompatibleDC((HDC)0x0);
  CDC::Attach(local_bc,pHVar1);
  iVar2 = GetObjectW(*(HANDLE *)(this + 0x88),0x18,local_10c);
  pcVar5 = SelectObject_exref;
  if (iVar2 != 0) {
    local_98 = local_108;
    local_ac = (double)CONCAT44(local_104,(undefined4)local_ac);
    if (*(HGDIOBJ *)(this + 0x88) == (HGDIOBJ)0x0) {
      local_a0 = (HGDIOBJ)0x0;
    }
    else {
      local_a0 = SelectObject(local_b8,*(HGDIOBJ *)(this + 0x88));
    }
    if (local_a0 != (HGDIOBJ)0x0) {
      FUN_1001714b((undefined4 *)local_cc);
      local_8._0_1_ = 1;
      pHVar1 = CreateCompatibleDC(local_b8);
      CDC::Attach(local_cc,pHVar1);
      local_40.bmiHeader.biPlanes = 1;
      local_40.bmiHeader.biWidth = local_98;
      local_40.bmiHeader.biHeight = local_ac._4_4_;
      local_40.bmiHeader.biSizeImage = local_ac._4_4_ * local_98;
      local_40.bmiHeader.biSize = 0x28;
      local_40.bmiHeader.biBitCount = 0x20;
      local_40.bmiHeader.biCompression = 0;
      local_40.bmiHeader.biXPelsPerMeter = 0;
      local_40.bmiHeader.biYPelsPerMeter = 0;
      local_40.bmiHeader.biClrUsed = 0;
      local_40.bmiHeader.biClrImportant = 0;
      local_d8 = (void *)0x0;
      local_a4 = CreateDIBSection(local_c8,&local_40,0,&local_d8,(HANDLE)0x0,0);
      if (local_a4 == (HBITMAP)0x0) {
        SelectObject(local_b8,local_a0);
      }
      else {
        local_dc = SelectObject(local_c8,local_a4);
        if (local_dc != (HGDIOBJ)0x0) {
          BitBlt(local_c8,0,0,local_98,local_ac._4_4_,local_b8,0,0,0xcc0020);
          local_9c = 0x82;
          if (0 < (int)*(ulong *)(this + 0xc)) {
            local_9c = *(ulong *)(this + 0xc);
          }
          if (*(int *)(this + 8) == 0x20) {
            iVar2 = GetObjectW(local_a4,0x54,local_94);
            if ((iVar2 == 0) || (local_82 != 0x20)) goto LAB_100810fb;
            if (local_80 != 0) {
              local_98 = 0;
              if (0 < local_8c * local_90) {
                local_ac = (double)(int)local_9c * 0.01;
                puVar4 = (undefined1 *)(local_80 + 1);
                do {
                  FUN_1009caa5((uint)CONCAT21(CONCAT11(puVar4[-1],*puVar4),puVar4[1]),&local_f4,
                               (double *)&local_e4,&local_d4);
                  uVar7 = SUB84(local_ac,0);
                  uVar9 = (undefined4)((ulonglong)local_ac >> 0x20);
                  uVar6 = uVar9;
                  uVar8 = uVar7;
                  uVar10 = uVar9;
                  uVar3 = FUN_1009c879(local_f4,local_d4,0.0);
                  local_9c = CDrawingManager::PixelAlpha
                                       (uVar3,(double)CONCAT44(uVar7,uVar9),
                                        (double)CONCAT44(uVar8,uVar6),
                                        (double)CONCAT44(in_stack_fffffee4,uVar10));
                  puVar4[1] = (char)((ulonglong)((local_9c & 0xff) * (uint)(byte)puVar4[2]) / 0xff);
                  *puVar4 = (char)((ulonglong)((local_9c >> 8 & 0xff) * (uint)(byte)puVar4[2]) /
                                  0xff);
                  local_98 = local_98 + 1;
                  puVar4[-1] = (char)((ulonglong)((local_9c >> 0x10 & 0xff) * (uint)(byte)puVar4[2])
                                     / 0xff);
                  puVar4 = puVar4 + 4;
                } while (local_98 < local_8c * local_90);
              }
              goto LAB_1008137e;
            }
          }
          else {
            CDrawingManager::CDrawingManager((CDrawingManager *)&local_d4,local_cc);
            local_8._0_1_ = 2;
            local_e4 = local_98;
            local_ec = 0;
            local_e8 = 0;
            local_e0 = local_ac._4_4_;
            CDrawingManager::GrayRect((CDrawingManager *)&local_d4);
            local_8._0_1_ = 1;
            FUN_1009c588((undefined4 *)&local_d4);
            pcVar5 = SelectObject_exref;
LAB_1008137e:
            (*pcVar5)(local_c8,local_dc);
            (*pcVar5)(local_b8,local_a0);
            DeleteObject(*(HGDIOBJ *)(this + 0x88));
            *(HBITMAP *)(this + 0x88) = local_a4;
          }
          local_8 = (uint)local_8._1_3_ << 8;
          CDC::~CDC(local_cc);
          local_8 = 0xffffffff;
          CDC::~CDC(local_bc);
          goto LAB_10081011;
        }
        SelectObject(local_b8,local_a0);
        DeleteObject(local_a4);
      }
LAB_100810fb:
      local_8 = (uint)local_8._1_3_ << 8;
      CDC::~CDC(local_cc);
    }
  }
  local_8 = 0xffffffff;
  CDC::~CDC(local_bc);
LAB_10081011:
  iVar2 = FUN_100f90cf();
  return iVar2;
}

