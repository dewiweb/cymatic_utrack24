// rea decompile_all
// name: FUN_100818d7
// address: 0x100818d7
// body: available
// range: 0x100818d7-0x10081dfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_100818d7(void *this,uint param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  HDC pHVar7;
  undefined1 *puVar8;
  undefined1 local_130 [4];
  int local_12c;
  int local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined4 local_b8;
  COLORREF CStack_b4;
  CDC local_b0 [4];
  HDC local_ac;
  undefined4 local_a0;
  HGDIOBJ pvStack_9c;
  undefined4 local_98;
  COLORREF CStack_94;
  CDC local_90 [4];
  HDC local_8c;
  HBITMAP local_80;
  int local_7c;
  int local_78;
  int local_74;
  HGDIOBJ local_70;
  int local_6c;
  undefined1 local_68 [4];
  int local_64;
  int local_60;
  short local_56;
  int local_54;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x120;
  local_8 = 0x100818e6;
  FUN_1009caa5(param_1,&local_118,&local_f8,&local_100);
  FUN_1009caa5(param_2,&local_c0,&local_110,&local_f0);
  local_e0 = local_c0 - local_118;
  local_c8 = local_f0 - local_100;
  local_d0 = local_110 - local_f8;
  if (*(int *)((int)this + 8) == 0x20) {
    iVar5 = GetObjectW(*(HANDLE *)((int)this + 0x88),0x54,local_68);
    if ((((iVar5 != 0) && (local_56 == 0x20)) && (local_54 != 0)) &&
       (iVar5 = 0, 0 < local_60 * local_64)) {
      puVar8 = (undefined1 *)(local_54 + 2);
      do {
        if (puVar8[1] != '\0') {
          FUN_1009caa5((uint)CONCAT21(CONCAT11(puVar8[-2],puVar8[-1]),*puVar8),(double *)&local_b8,
                       (double *)&local_98,(double *)&local_a0);
          dVar1 = (double)CONCAT44(CStack_b4,local_b8) + local_e0;
          if (((1.0 < dVar1) || (dVar2 = 0.0, 0.0 <= dVar1)) && (dVar2 = dVar1, 1.0 < dVar1)) {
            dVar2 = 1.0;
          }
          dVar3 = 0.0;
          dVar1 = (double)CONCAT44(CStack_94,local_98) + local_d0;
          if ((1.0 < dVar1) || (0.0 <= dVar1)) {
            if (1.0 < dVar1) {
              dVar1 = 1.0;
            }
          }
          else {
            dVar1 = 0.0;
          }
          dVar4 = (double)CONCAT44(pvStack_9c,local_a0) + local_c8;
          if (((1.0 < dVar4) || (0.0 <= dVar4)) && (dVar3 = dVar4, 1.0 < dVar4)) {
            dVar3 = 1.0;
          }
          if (0.5 < local_c0) {
            dVar3 = (double)CONCAT44(pvStack_9c,local_a0);
          }
          uVar6 = FUN_1009c879(dVar2,dVar3,dVar1);
          *puVar8 = (char)uVar6;
          puVar8[-1] = (char)(uVar6 >> 8);
          puVar8[-2] = (char)(uVar6 >> 0x10);
        }
        iVar5 = iVar5 + 1;
        puVar8 = puVar8 + 4;
      } while (iVar5 < local_60 * local_64);
    }
  }
  else {
    FUN_1001714b((undefined4 *)local_90);
    local_8 = 0;
    pHVar7 = CreateCompatibleDC((HDC)0x0);
    CDC::Attach(local_90,pHVar7);
    iVar5 = GetObjectW(*(HANDLE *)((int)this + 0x88),0x18,local_130);
    if (iVar5 != 0) {
      if (*(HGDIOBJ *)((int)this + 0x88) == (HGDIOBJ)0x0) {
        local_70 = (HGDIOBJ)0x0;
      }
      else {
        local_70 = SelectObject(local_8c,*(HGDIOBJ *)((int)this + 0x88));
      }
      if (local_70 != (HGDIOBJ)0x0) {
        local_7c = local_12c;
        local_78 = local_128;
        local_80 = CreateCompatibleBitmap(local_8c,local_12c,local_128);
        if (local_80 == (HBITMAP)0x0) {
          SelectObject(local_8c,local_70);
        }
        else {
          FUN_1001714b((undefined4 *)local_b0);
          local_8 = CONCAT31(local_8._1_3_,1);
          pHVar7 = CreateCompatibleDC(local_8c);
          CDC::Attach(local_b0,pHVar7);
          pvStack_9c = SelectObject(local_ac,local_80);
          if (pvStack_9c == (HGDIOBJ)0x0) {
            SelectObject(local_8c,local_70);
            DeleteObject(local_80);
          }
          else {
            BitBlt(local_ac,0,0,local_7c,local_78,local_8c,0,0,0xcc0020);
            CStack_94 = *(COLORREF *)((int)this + 0xa4);
            if (*(COLORREF *)((int)this + 0xa4) == 0xffffffff) {
              CStack_94 = DAT_10166ab4;
            }
            local_6c = 0;
            if (0 < local_7c) {
              do {
                local_74 = 0;
                if (0 < local_78) {
                  do {
                    CStack_b4 = GetPixel(local_ac,local_6c,local_74);
                    if (CStack_b4 != CStack_94) {
                      FUN_1009caa5(CStack_b4,&local_e8,&local_108,&local_d8);
                      dVar1 = local_e8 + local_e0;
                      if (((1.0 < dVar1) || (dVar2 = 0.0, 0.0 <= dVar1)) &&
                         (dVar2 = dVar1, 1.0 < dVar1)) {
                        dVar2 = 1.0;
                      }
                      dVar3 = 0.0;
                      dVar1 = local_108 + local_d0;
                      if ((1.0 < dVar1) || (0.0 <= dVar1)) {
                        if (1.0 < dVar1) {
                          dVar1 = 1.0;
                        }
                      }
                      else {
                        dVar1 = 0.0;
                      }
                      dVar4 = local_d8 + local_c8;
                      if (((1.0 < dVar4) || (0.0 <= dVar4)) && (dVar3 = dVar4, 1.0 < dVar4)) {
                        dVar3 = 1.0;
                      }
                      if (0.5 < local_c0) {
                        dVar3 = local_d8;
                      }
                      uVar6 = FUN_1009c879(dVar2,dVar3,dVar1);
                      if (CStack_b4 != uVar6) {
                        SetPixel(local_ac,local_6c,local_74,uVar6);
                      }
                    }
                    local_74 = local_74 + 1;
                  } while (local_74 < local_78);
                }
                local_6c = local_6c + 1;
              } while (local_6c < local_7c);
            }
            SelectObject(local_ac,pvStack_9c);
            SelectObject(local_8c,local_70);
            DeleteObject(*(HGDIOBJ *)((int)this + 0x88));
            *(HBITMAP *)((int)this + 0x88) = local_80;
            AfxDeleteObject((void **)((int)this + 0x8c));
            *(void **)((int)this + 0x8c) = (void *)0x0;
            AfxDeleteObject((void **)((int)this + 0x90));
            *(void **)((int)this + 0x90) = (void *)0x0;
          }
          local_8 = local_8 & 0xffffff00;
          CDC::~CDC(local_b0);
        }
      }
    }
    local_8 = 0xffffffff;
    CDC::~CDC(local_90);
  }
  FUN_100f90cf();
  return;
}

