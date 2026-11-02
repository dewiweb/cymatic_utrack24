// rea decompile_all
// name: __gmtime64_s
// address: 0x5bc035
// body: available
// range: 0x5bc035-0x5bc277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __gmtime64_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __gmtime64_s(tm *_Tm,__time64_t *_Time)

{
  tm *ptVar1;
  uint uVar2;
  bool bVar3;
  tm *ptVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  ptVar4 = _Tm;
  bVar3 = false;
  if ((_Tm == (tm *)0x0) || (_memset(_Tm,0xff,0x24), _Time == (__time64_t *)0x0)) {
    piVar5 = __errno();
    *piVar5 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return 0x16;
  }
  uVar7 = (uint)*_Time;
  uVar2 = *(uint *)((int)_Time + 4);
  lVar12 = *_Time;
  if (((0x7fffffff < uVar2) && (((int)uVar2 < -1 || (uVar7 < 0xffff5740)))) ||
     ((6 < (int)uVar2 && ((7 < (int)uVar2 || (0x934126cf < uVar7)))))) {
    piVar5 = __errno();
    *piVar5 = 0x16;
    return 0x16;
  }
  iVar6 = __alldiv(uVar7,uVar2,0x1e13380,0);
  _Tm = (tm *)(iVar6 + 0x46);
  ptVar1 = (tm *)(iVar6 + 0x45);
  lVar11 = __allmul(iVar6,iVar6 >> 0x1f,0xfffffe93,0xffffffff);
  lVar11 = __allmul(lVar11 - (((iVar6 + 0x171) / 400 - (int)ptVar1 / 100) + -0x11 +
                             ((int)((int)&ptVar1->tm_sec + ((int)ptVar1 >> 0x1f & 3U)) >> 2)),
                    0x15180,0);
  lVar11 = lVar11 + lVar12;
  iVar9 = (int)lVar11;
  if ((lVar11 < 0x100000000) && (lVar11 < 0)) {
    lVar11 = lVar11 + 0x1e13380;
    uVar7 = (uint)ptVar1 & 0x80000003;
    bVar10 = uVar7 == 0;
    if ((int)uVar7 < 0) {
      bVar10 = (uVar7 - 1 | 0xfffffffc) == 0xffffffff;
    }
    _Tm = ptVar1;
    if (((!bVar10) || ((int)ptVar1 % 100 == 0)) && ((iVar6 + 0x7b1) % 400 != 0)) goto LAB_005bc1b9;
    lVar11 = CONCAT44((int)((ulonglong)lVar11 >> 0x20) + (uint)(0xfffeae7f < (uint)lVar11),
                      iVar9 + 0x1e28500);
  }
  else {
    uVar7 = (uint)_Tm & 0x80000003;
    bVar10 = uVar7 == 0;
    if ((int)uVar7 < 0) {
      bVar10 = (uVar7 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((!bVar10) || ((int)_Tm % 100 == 0)) && ((iVar6 + 0x7b2) % 400 != 0)) goto LAB_005bc1b9;
  }
  bVar3 = true;
LAB_005bc1b9:
  ptVar4->tm_year = (int)_Tm;
  iVar6 = __alldiv(lVar11,0x15180,0);
  ptVar4->tm_yday = iVar6;
  lVar12 = __allmul(iVar6,iVar6 >> 0x1f,0xfffeae80,0xffffffff);
  puVar8 = &DAT_00956c98;
  if (!bVar3) {
    puVar8 = (undefined4 *)&DAT_00956ccc;
  }
  iVar9 = 1;
  iVar6 = puVar8[1];
  while (iVar6 < ptVar4->tm_yday) {
    iVar9 = iVar9 + 1;
    iVar6 = puVar8[iVar9];
  }
  ptVar4->tm_mon = iVar9 + -1;
  ptVar4->tm_mday = ptVar4->tm_yday - puVar8[iVar9 + -1];
  iVar6 = __alldiv((int)*_Time,*(undefined4 *)((int)_Time + 4),0x15180,0);
  ptVar4->tm_wday = (iVar6 + 4) % 7;
  iVar6 = __alldiv(lVar12 + lVar11,0xe10,0);
  ptVar4->tm_hour = iVar6;
  lVar13 = __allmul(iVar6,iVar6 >> 0x1f,0xfffff1f0,0xffffffff);
  lVar13 = lVar12 + lVar11 + lVar13;
  iVar6 = __alldiv(lVar13,0x3c,0);
  ptVar4->tm_min = iVar6;
  ptVar4->tm_isdst = 0;
  ptVar4->tm_sec = (int)lVar13 + iVar6 * -0x3c;
  return 0;
}

