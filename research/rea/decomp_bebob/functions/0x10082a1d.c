// rea decompile_all
// name: ATL::CImage::CreateFromGdiplusBitmap
// address: 0x10082a1d
// body: available
// range: 0x10082a1d-0x10082dae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    private: long __thiscall ATL::CImage::CreateFromGdiplusBitmap(class Gdiplus::Bitmap &)
   
   Library: Visual Studio 2010 Release */

long __thiscall ATL::CImage::CreateFromGdiplusBitmap(CImage *this,Bitmap *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  Bitmap *pBVar4;
  uint uVar5;
  int iVar6;
  ColorPalette *pCVar7;
  long lVar8;
  void *pvVar9;
  bool bVar10;
  undefined1 local_450 [8];
  int local_448;
  ColorPalette *local_440;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  uint local_428;
  undefined4 local_424;
  Bitmap *local_420;
  uint local_41c;
  uint local_418;
  uint local_414;
  ColorPalette *local_410;
  undefined4 *local_40c;
  tagRGBQUAD local_408 [256];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_420 = param_1;
  uVar5 = FUN_1007fce8((int)param_1);
  local_41c = 0x20;
  local_414 = 0x22009;
  if ((uVar5 & 0x20000) != 0) {
    local_41c = (int)uVar5 >> 8 & 0xff;
    local_414 = uVar5;
  }
  bVar10 = (uVar5 & 0x40000) != 0;
  if (bVar10) {
    local_41c = 0x20;
    local_414 = 0x26200a;
  }
  local_410 = (ColorPalette *)(uint)bVar10;
  local_428 = uVar5;
  local_418 = FID_conflict_GetHeight((int)param_1);
  iVar6 = FID_conflict_GetHeight((int)param_1);
  iVar6 = CreateEx(this,iVar6,local_418,local_41c,0,(ulong *)0x0,(ulong)local_410);
  if (iVar6 == 0) goto LAB_10082d98;
  local_40c = (undefined4 *)0x0;
  if ((uVar5 & 0x10000) != 0) {
    pCVar7 = (ColorPalette *)FID_conflict_GetHeight((int)param_1);
    local_410 = pCVar7;
    if ((pCVar7 < (ColorPalette *)0x401) &&
       (bVar10 = _ATL_SAFE_ALLOCA_IMPL::_AtlVerifyStackAvailable((ulong)pCVar7), bVar10)) {
      pCVar7 = (ColorPalette *)&stack0xfffffba4;
    }
    else {
      pCVar7 = _ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::Allocate
                         ((CAtlSafeAllocBufferManager<ATL::CCRTAllocator> *)&local_40c,(ulong)pCVar7
                         );
    }
    puVar3 = local_40c;
    if (pCVar7 == (ColorPalette *)0x0) {
      while (bVar10 = local_40c != (undefined4 *)0x0, local_40c = puVar3, bVar10) {
        puVar1 = (undefined4 *)*puVar3;
        local_40c = puVar1;
        _free(puVar3);
        puVar3 = local_40c;
        local_40c = puVar1;
      }
      goto LAB_10082d98;
    }
    Gdiplus::Image::GetPalette((Image *)param_1,pCVar7,(int)local_410);
    uVar5 = *(uint *)(pCVar7 + 4);
    puVar3 = local_40c;
    if ((uVar5 == 0) || (0x100 < uVar5)) {
      while (bVar10 = local_40c != (undefined4 *)0x0, local_40c = puVar3, bVar10) {
        puVar1 = (undefined4 *)*puVar3;
        local_40c = puVar1;
        _free(puVar3);
        puVar3 = local_40c;
        local_40c = puVar1;
      }
      goto LAB_10082d98;
    }
    local_418 = 0;
    if (uVar5 != 0) {
      local_410 = pCVar7 + 8;
      do {
        uVar5 = local_418;
        uVar2 = *(undefined4 *)local_410;
        local_410 = local_410 + 4;
        local_408[local_418].rgbRed = (BYTE)((uint)uVar2 >> 0x10);
        local_418 = local_418 + 1;
        local_408[uVar5].rgbGreen = (BYTE)((uint)uVar2 >> 8);
        local_408[uVar5].rgbBlue = (BYTE)uVar2;
        local_408[uVar5].rgbReserved = '\0';
      } while (local_418 < *(uint *)(pCVar7 + 4));
    }
    SetColorTable(this,0,*(uint *)(pCVar7 + 4),local_408);
    uVar5 = local_428;
  }
  if (local_414 == uVar5) {
    local_430 = *(undefined4 *)(this + 0xc);
    local_438 = 0;
    local_434 = 0;
    local_42c = *(undefined4 *)(this + 0x10);
    iVar6 = GdipBitmapLockBits(*(undefined4 *)(param_1 + 4),&local_438,1,uVar5,local_450);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      *(int *)(param_1 + 8) = iVar6;
    }
    puVar3 = local_40c;
    if (iVar6 != 0) {
      while (bVar10 = local_40c != (undefined4 *)0x0, local_40c = puVar3, bVar10) {
        puVar1 = (undefined4 *)*puVar3;
        local_40c = puVar1;
        _free(puVar3);
        puVar3 = local_40c;
        local_40c = puVar1;
      }
      goto LAB_10082d98;
    }
    local_414 = 0;
    pvVar9 = *(void **)(this + 8);
    uVar5 = *(int *)(this + 0xc) * local_41c + 7 >> 3;
    local_410 = local_440;
    if (0 < *(int *)(this + 0x10)) {
      do {
        FUN_10004cd0(pvVar9,uVar5,local_410,uVar5);
        local_410 = local_410 + local_448;
        pvVar9 = (void *)((int)pvVar9 + *(int *)(this + 0x14));
        local_414 = local_414 + 1;
      } while ((int)local_414 < *(int *)(this + 0x10));
    }
    pBVar4 = local_420;
    iVar6 = GdipBitmapUnlockBits(*(undefined4 *)(local_420 + 4),local_450);
    puVar3 = local_40c;
    if (iVar6 != 0) {
      *(int *)(pBVar4 + 8) = iVar6;
    }
  }
  else {
    Gdiplus::Bitmap::Bitmap
              ((Bitmap *)&local_438,*(int *)(this + 0xc),*(int *)(this + 0x10),*(int *)(this + 0x14)
               ,local_414,*(uchar **)(this + 8));
    Gdiplus::Graphics::Graphics((Graphics *)&local_424,(Image *)&local_438);
    Gdiplus::Graphics::DrawImage((Graphics *)&local_424,(Image *)param_1,0,0);
    GdipDeleteGraphics(local_424);
    GdipDisposeImage(local_434);
    puVar3 = local_40c;
  }
  while (bVar10 = local_40c != (undefined4 *)0x0, local_40c = puVar3, bVar10) {
    puVar1 = (undefined4 *)*puVar3;
    local_40c = puVar1;
    _free(puVar3);
    puVar3 = local_40c;
    local_40c = puVar1;
  }
LAB_10082d98:
  lVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar8;
}

