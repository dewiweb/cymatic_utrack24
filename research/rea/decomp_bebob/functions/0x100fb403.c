// rea decompile_all
// name: FUN_100fb403
// address: 0x100fb403
// body: available
// range: 0x100fb403-0x100fb6b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100fb403(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  errno_t eVar6;
  int iVar7;
  uint uVar8;
  tm *ptVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  undefined8 local_34;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_44 = 0;
  local_48 = 0;
  if (this == (void *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_100fe6d4();
    goto LAB_100fb6a4;
  }
  uVar5 = *(uint *)((int)this + 0x14);
  local_34 = (longlong)(int)uVar5;
  if ((((int)uVar5 >> 0x1f) + -1 + (uint)(0x44 < uVar5) == 0) && (uVar5 - 0x45 < 0x409)) {
    iVar7 = *(int *)((int)this + 0x10);
    if ((iVar7 < 0) || (0xb < iVar7)) {
      uVar4 = iVar7 / 0xc;
      iVar7 = iVar7 % 0xc;
      iVar1 = uVar5 + uVar4;
      *(int *)((int)this + 0x10) = iVar7;
      iVar2 = ((int)uVar5 >> 0x1f) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar5,uVar4);
      local_34 = CONCAT44(iVar2,iVar1);
      if (iVar7 < 0) {
        *(int *)((int)this + 0x10) = iVar7 + 0xc;
        local_34 = CONCAT44(iVar2 + -1 + (uint)(iVar1 != 0),iVar1 + -1);
      }
      if ((local_34._4_4_ + -1 + (uint)(0x44 < (uint)local_34) != 0) ||
         (0x408 < (uint)local_34 - 0x45)) goto LAB_100fb693;
    }
    iVar7 = *(int *)((int)this + 0x10);
    local_40 = *(uint *)(&DAT_10164144 + iVar7 * 4);
    local_3c = (int)local_40 >> 0x1f;
    lVar11 = __allrem((uint)local_34,(uint)((ulonglong)local_34 >> 0x20),4,0);
    if (lVar11 == 0) {
      lVar11 = __allrem((uint)local_34,(uint)((ulonglong)local_34 >> 0x20),100,0);
      if (lVar11 == 0) goto LAB_100fb4f7;
LAB_100fb513:
      if (1 < iVar7) {
        bVar10 = 0xfffffffe < local_40;
        local_40 = local_40 + 1;
        local_3c = local_3c + (uint)bVar10;
      }
    }
    else {
LAB_100fb4f7:
      lVar11 = __allrem((uint)local_34 + 0x76c,local_34._4_4_ + (uint)(0xfffff893 < (uint)local_34),
                        400,0);
      if (lVar11 == 0) goto LAB_100fb513;
    }
    uVar8 = (uint)local_34 - 1;
    uVar5 = local_34._4_4_ - (uint)((uint)local_34 == 0);
    lVar11 = __alldiv((uint)local_34 + 299,local_34._4_4_ + (uint)(0xfffffed4 < (uint)local_34),400,
                      0);
    lVar11 = lVar11 + *(int *)((int)this + 0xc);
    uVar4 = (uint)lVar11;
    local_38 = (int)((ulonglong)lVar11 >> 0x20);
    uVar12 = __alldiv(uVar8,uVar5,100,0);
    local_38 = (local_38 - (int)((ulonglong)uVar12 >> 0x20)) - (uint)(uVar4 < (uint)uVar12);
    lVar11 = __alldiv(uVar8,uVar5,4,0);
    lVar11 = lVar11 + CONCAT44(local_38,uVar4 - (uint)uVar12);
    local_38 = (int)((ulonglong)lVar11 >> 0x20);
    lVar13 = __allmul((uint)local_34,(int)((ulonglong)local_34 >> 0x20),0x16d,0);
    lVar11 = lVar13 + CONCAT44(local_38,(int)lVar11) + CONCAT44(local_3c,local_40);
    uVar5 = (uint)lVar11;
    lVar11 = __allmul(uVar5 - 0x63df,(int)((ulonglong)lVar11 >> 0x20) - (uint)(uVar5 < 0x63df),0x18,
                      0);
    lVar11 = lVar11 + *(int *)((int)this + 8);
    lVar11 = __allmul((uint)lVar11,(int)((ulonglong)lVar11 >> 0x20),0x3c,0);
    lVar11 = lVar11 + *(int *)((int)this + 4);
    local_34 = __allmul((uint)lVar11,(int)((ulonglong)lVar11 >> 0x20),0x3c,0);
    local_34 = local_34 + *(int *)this;
    if (param_1 == 0) {
LAB_100fb670:
      iVar7 = __gmtime64_s(&local_2c,&local_34);
LAB_100fb67d:
      if (iVar7 != 0) goto LAB_100fb693;
    }
    else {
      ___tzset();
      eVar6 = FID_conflict___get_dstbias((long *)&local_44);
      if ((eVar6 != 0) || (eVar6 = FID_conflict___get_dstbias((long *)&local_48), eVar6 != 0)) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        goto LAB_100fb670;
      }
      local_34 = CONCAT44(local_34._4_4_ + ((int)local_48 >> 0x1f) +
                          (uint)CARRY4((uint)local_34,local_48),(uint)local_34 + local_48);
      eVar6 = FUN_100fb6c4(&local_2c,(uint *)&local_34);
      if (eVar6 != 0) goto LAB_100fb693;
      if ((0 < *(int *)((int)this + 0x20)) ||
         ((*(int *)((int)this + 0x20) < 0 && (0 < local_2c.tm_isdst)))) {
        local_34 = CONCAT44(local_34._4_4_ + ((int)local_44 >> 0x1f) +
                            (uint)CARRY4((uint)local_34,local_44),(uint)local_34 + local_44);
        iVar7 = FUN_100fb6c4(&local_2c,(uint *)&local_34);
        goto LAB_100fb67d;
      }
    }
    ptVar9 = &local_2c;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(int *)this = ptVar9->tm_sec;
      ptVar9 = (tm *)&ptVar9->tm_min;
      this = (int *)((int)this + 4);
    }
  }
  else {
LAB_100fb693:
    piVar3 = __errno();
    *piVar3 = 0x16;
  }
LAB_100fb6a4:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

