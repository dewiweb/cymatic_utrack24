// rea decompile_all
// name: CMFCToolBarImages::MirrorBitmap
// address: 0x100813ba
// body: available
// range: 0x100813ba-0x100815e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: static int __stdcall CMFCToolBarImages::MirrorBitmap(struct HBITMAP__ * &,int)
   
   Library: Visual Studio 2010 Release */

int CMFCToolBarImages::MirrorBitmap(HBITMAP__ **param_1,int param_2)

{
  undefined4 uVar1;
  HGDIOBJ pvVar2;
  int iVar3;
  HDC pHVar4;
  COLORREF color;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_b8 [4];
  int local_b4;
  int local_b0;
  short local_a6;
  COLORREF local_a0;
  CDC local_9c [4];
  HDC local_98;
  HGDIOBJ local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 *local_7c;
  HGDIOBJ local_78;
  HGDIOBJ local_74;
  undefined4 *local_70;
  int local_6c;
  undefined1 local_68 [18];
  short local_56;
  undefined4 *local_54;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa8;
  local_8 = 0x100813c9;
  local_88 = param_2;
  if ((*param_1 != (HBITMAP__ *)0x0) && (iVar3 = GetObjectW(*param_1,0x18,local_b8), iVar3 != 0)) {
    local_80 = local_b4;
    local_6c = local_b4 / param_2;
    local_84 = local_b0;
    if (local_a6 == 0x20) {
      iVar3 = GetObjectW(*param_1,0x54,local_68);
      if ((((iVar3 != 0) && (local_56 == 0x20)) && (local_54 != (undefined4 *)0x0)) &&
         (0 < local_6c)) {
        local_70 = local_54;
        iVar3 = param_2;
        do {
          if (0 < local_84) {
            local_74 = (HGDIOBJ)(iVar3 / 2);
            local_7c = (undefined4 *)local_84;
            puVar7 = local_70;
            do {
              puVar5 = puVar7 + param_2 + -1;
              puVar6 = puVar7;
              pvVar2 = local_74;
              if (0 < (int)local_74) {
                do {
                  local_78 = pvVar2;
                  uVar1 = *puVar6;
                  *puVar6 = *puVar5;
                  *puVar5 = uVar1;
                  puVar5 = puVar5 + -1;
                  local_78 = (HGDIOBJ)((int)local_78 + -1);
                  puVar6 = puVar6 + 1;
                  pvVar2 = local_78;
                } while (local_78 != (HGDIOBJ)0x0);
              }
              puVar7 = puVar7 + local_80;
              local_7c = (undefined4 *)((int)local_7c + -1);
            } while (local_7c != (undefined4 *)0x0);
            local_7c = (undefined4 *)0x0;
            iVar3 = local_88;
          }
          local_70 = local_70 + param_2;
          local_6c = local_6c + -1;
        } while (local_6c != 0);
        local_6c = 0;
      }
    }
    else {
      FUN_1001714b((undefined4 *)local_9c);
      local_8 = 0;
      pHVar4 = CreateCompatibleDC((HDC)0x0);
      CDC::Attach(local_9c,pHVar4);
      if (*param_1 == (HBITMAP__ *)0x0) {
        local_78 = (HGDIOBJ)0x0;
      }
      else {
        local_78 = SelectObject(local_98,*param_1);
      }
      if (local_78 != (HGDIOBJ)0x0) {
        if (0 < local_6c) {
          local_7c = (undefined4 *)0x0;
          local_80 = local_6c;
          do {
            local_6c = 0;
            if (0 < local_84) {
              local_74 = (HGDIOBJ)(local_88 / 2);
              do {
                iVar3 = (int)local_7c + local_88 + -1;
                local_70 = local_7c;
                if (0 < (int)local_74) {
                  local_8c = local_74;
                  do {
                    local_a0 = GetPixel(local_98,(int)local_70,local_6c);
                    color = GetPixel(local_98,iVar3,local_6c);
                    SetPixel(local_98,(int)local_70,local_6c,color);
                    SetPixel(local_98,iVar3,local_6c,local_a0);
                    local_70 = (undefined4 *)((int)local_70 + 1);
                    iVar3 = iVar3 + -1;
                    local_8c = (HGDIOBJ)((int)local_8c + -1);
                  } while (local_8c != (HGDIOBJ)0x0);
                }
                local_6c = local_6c + 1;
              } while (local_6c < local_84);
            }
            local_7c = (undefined4 *)((int)local_7c + local_88);
            local_80 = local_80 + -1;
          } while (local_80 != 0);
        }
        SelectObject(local_98,local_78);
      }
      local_8 = 0xffffffff;
      CDC::~CDC(local_9c);
    }
  }
  iVar3 = FUN_100f90cf();
  return iVar3;
}

