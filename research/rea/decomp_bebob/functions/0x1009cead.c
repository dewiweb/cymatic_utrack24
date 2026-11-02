// rea decompile_all
// name: CDrawingManager::CreateBitmap_32
// address: 0x1009cead
// body: available
// range: 0x1009cead-0x1009d03b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static struct HBITMAP__ * __stdcall CDrawingManager::CreateBitmap_32(struct HBITMAP__
   *,unsigned long)
   
   Library: Visual Studio 2010 Release */

HBITMAP__ * CDrawingManager::CreateBitmap_32(HBITMAP__ *param_1,ulong param_2)

{
  int iVar1;
  HDC pHVar2;
  HGDIOBJ h;
  HGDIOBJ h_00;
  uint *puVar3;
  undefined1 local_5c [4];
  int local_58;
  long local_54;
  short local_4a;
  void *local_48;
  CDC local_44 [4];
  HDC local_40;
  CDC local_34 [4];
  HDC local_30;
  int local_24;
  long local_20;
  long local_1c;
  HBITMAP__ *local_18;
  uint *local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x1009ceb9;
  if (((param_1 == (HBITMAP__ *)0x0) || (iVar1 = GetObjectW(param_1,0x18,local_5c), iVar1 == 0)) ||
     (local_48 == (void *)0x0)) {
    local_18 = (HBITMAP__ *)0x0;
  }
  else {
    local_20 = local_54;
    local_14[0] = (uint *)0x0;
    local_24 = local_58;
    local_18 = CreateBitmap_32((CSize *)&local_24,local_14);
    local_1c = _labs(local_54);
    if (local_18 != (HBITMAP__ *)0x0) {
      local_20 = local_58 * local_1c;
      if (local_4a == 0x20) {
        FID_conflict__memcpy(local_14[0],local_48,local_20 * 4);
      }
      else {
        FUN_1001714b((undefined4 *)local_44);
        local_8 = 0;
        pHVar2 = CreateCompatibleDC((HDC)0x0);
        CDC::Attach(local_44,pHVar2);
        h = SelectObject(local_40,param_1);
        if (h != (HGDIOBJ)0x0) {
          FUN_1001714b((undefined4 *)local_34);
          local_8 = CONCAT31(local_8._1_3_,1);
          pHVar2 = CreateCompatibleDC((HDC)0x0);
          CDC::Attach(local_34,pHVar2);
          h_00 = SelectObject(local_30,local_18);
          BitBlt(local_30,0,0,local_58,local_1c,local_40,0,0,0xcc0020);
          if (h_00 != (HGDIOBJ)0x0) {
            SelectObject(local_30,h_00);
          }
          SelectObject(local_40,h);
          iVar1 = local_20;
          puVar3 = local_14[0];
          if (param_2 == 0xffffffff) {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar3 = *puVar3 | 0xff000000;
              puVar3 = puVar3 + 1;
            }
          }
          else {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              if (*puVar3 ==
                  ((param_2 >> 8 & 0xff | (param_2 & 0xff) << 8) << 8 | param_2 >> 0x10 & 0xff)) {
                *puVar3 = 0;
              }
              else {
                *puVar3 = *puVar3 | 0xff000000;
              }
              puVar3 = puVar3 + 1;
            }
          }
          local_8 = local_8 & 0xffffff00;
          CDC::~CDC(local_34);
        }
        local_8 = 0xffffffff;
        CDC::~CDC(local_44);
      }
    }
  }
  return local_18;
}

