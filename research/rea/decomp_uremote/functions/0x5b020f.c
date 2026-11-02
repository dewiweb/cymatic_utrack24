// rea decompile_all
// name: __make__time64_t
// address: 0x5b020f
// body: available
// range: 0x5b020f-0x5b04c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __make__time64_t
   
   Library: Visual Studio 2008 Release */

longlong __make__time64_t(int param_1)

{
  int *in_EAX;
  int *piVar1;
  uint uVar2;
  errno_t eVar3;
  int iVar4;
  tm *ptVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  tm local_4c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  undefined8 local_18;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  if (in_EAX == (int *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  local_18._0_4_ = in_EAX[5];
  local_18._4_4_ = (int)(uint)local_18 >> 0x1f;
  lVar7 = (longlong)(int)(uint)local_18;
  if ((local_18._4_4_ + -1 + (uint)(0x44 < (uint)local_18) == 0) &&
     (lVar7 = (longlong)(int)(uint)local_18, (uint)local_18 - 0x45 < 0x409)) {
    iVar4 = in_EAX[4];
    if ((iVar4 < 0) || (0xb < iVar4)) {
      uVar2 = iVar4 / 0xc;
      iVar4 = iVar4 % 0xc;
      bVar6 = CARRY4((uint)local_18,uVar2);
      local_18._0_4_ = (uint)local_18 + uVar2;
      in_EAX[4] = iVar4;
      local_18._4_4_ = local_18._4_4_ + ((int)uVar2 >> 0x1f) + (uint)bVar6;
      if (iVar4 < 0) {
        bVar6 = (uint)local_18 != 0;
        local_18._0_4_ = (uint)local_18 - 1;
        in_EAX[4] = iVar4 + 0xc;
        local_18._4_4_ = local_18._4_4_ + -1 + (uint)bVar6;
      }
      lVar7 = CONCAT44(local_18._4_4_,(uint)local_18);
      if ((local_18._4_4_ + -1 + (uint)(0x44 < (uint)local_18) != 0) ||
         (lVar7 = CONCAT44(local_18._4_4_,(uint)local_18), 0x408 < (uint)local_18 - 0x45))
      goto LAB_005b04af;
    }
    iVar4 = in_EAX[4];
    local_20 = *(uint *)(&DAT_00956ccc + iVar4 * 4);
    local_1c = (int)local_20 >> 0x1f;
    lVar7 = __allrem((uint)local_18,local_18._4_4_,4,0);
    if ((((lVar7 == 0) && (lVar7 = __allrem((uint)local_18,local_18._4_4_,100,0), lVar7 != 0)) ||
        (lVar7 = __allrem((uint)local_18 + 0x76c,
                          local_18._4_4_ + (uint)(0xfffff893 < (uint)local_18),400,0), lVar7 == 0))
       && (1 < iVar4)) {
      bVar6 = 0xfffffffe < local_20;
      local_20 = local_20 + 1;
      local_1c = local_1c + (uint)bVar6;
    }
    iVar4 = (uint)local_18 - 1;
    local_24 = local_18._4_4_ - (uint)((uint)local_18 == 0);
    local_28 = iVar4;
    lVar7 = __alldiv((uint)local_18 + 299,local_18._4_4_ + (uint)(0xfffffed4 < (uint)local_18),400,0
                    );
    uVar2 = (uint)(lVar7 + in_EAX[3]);
    local_10 = (int)((ulonglong)(lVar7 + in_EAX[3]) >> 0x20);
    uVar8 = __alldiv(iVar4,local_24,100,0);
    local_10 = (local_10 - (int)((ulonglong)uVar8 >> 0x20)) - (uint)(uVar2 < (uint)uVar8);
    lVar7 = __alldiv(iVar4,local_24,4,0);
    lVar7 = lVar7 + CONCAT44(local_10,uVar2 - (uint)uVar8);
    local_10 = (int)((ulonglong)lVar7 >> 0x20);
    lVar9 = __allmul((uint)local_18,local_18._4_4_,0x16d,0);
    lVar7 = lVar9 + CONCAT44(local_10,(int)lVar7) + CONCAT44(local_1c,local_20);
    uVar2 = (uint)lVar7;
    lVar7 = __allmul(uVar2 - 0x63df,(int)((ulonglong)lVar7 >> 0x20) - (uint)(uVar2 < 0x63df),0x18,0)
    ;
    lVar7 = __allmul(lVar7 + in_EAX[2],0x3c,0);
    local_18 = __allmul(lVar7 + in_EAX[1],0x3c,0);
    local_18 = local_18 + *in_EAX;
    if (param_1 == 0) {
      iVar4 = __gmtime64_s(&local_4c,&local_18);
      lVar7 = local_18;
LAB_005b0499:
      if (iVar4 != 0) goto LAB_005b04af;
    }
    else {
      ___tzset();
      eVar3 = __get_dstbias((long *)&local_c);
      if (eVar3 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = __get_timezone((long *)&local_8);
      if (eVar3 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      local_18 = local_18 + (int)local_8;
      eVar3 = __localtime64_s(&local_4c,&local_18);
      lVar7 = local_18;
      if (eVar3 != 0) goto LAB_005b04af;
      if ((0 < in_EAX[8]) || ((in_EAX[8] < 0 && (0 < local_4c.tm_isdst)))) {
        local_18 = local_18 + (int)local_c;
        iVar4 = __localtime64_s(&local_4c,&local_18);
        lVar7 = local_18;
        goto LAB_005b0499;
      }
    }
    ptVar5 = &local_4c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *in_EAX = ptVar5->tm_sec;
      ptVar5 = (tm *)&ptVar5->tm_min;
      in_EAX = in_EAX + 1;
    }
  }
  else {
LAB_005b04af:
    local_18 = lVar7;
    piVar1 = __errno();
    *piVar1 = 0x16;
    lVar7 = -1;
  }
  return lVar7;
}

