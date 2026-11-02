// rea decompile_all
// name: __handle_exc
// address: 0x5b964a
// body: available
// range: 0x5b964a-0x5b982b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __handle_exc
   
   Library: Visual Studio 2008 Release */

bool __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  uint local_18;
  byte bStack_14;
  undefined1 uStack_13;
  ushort uStack_12;
  int local_c;
  uint local_8;
  
  uVar5 = param_1 & 0x1f;
  bVar3 = true;
  local_8 = uVar5;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_005b9d2b(1);
    uVar5 = param_1 & 0x17;
    goto LAB_005b980a;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_005b9d2b(4);
    uVar5 = param_1 & 0x1b;
    goto LAB_005b980a;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) == 0) || ((param_3 & 0x10) == 0)) goto LAB_005b980a;
    bVar6 = (param_1 & 0x10) != 0;
    if (*param_2 != 0.0) {
      fVar7 = (float10)FUN_005b9c28(*param_2,&local_c);
      dVar2 = (double)fVar7;
      local_18 = SUB84(dVar2,0);
      bStack_14 = (byte)((ulonglong)dVar2 >> 0x20);
      uStack_13 = (undefined1)((ulonglong)dVar2 >> 0x28);
      uStack_12 = (ushort)((ulonglong)dVar2 >> 0x30);
      local_c = local_c + -0x600;
      if (local_c < -0x432) {
        dVar2 = dVar2 * 0.0;
        bVar6 = bVar3;
LAB_005b97ea:
        local_18 = SUB84(dVar2,0);
        bStack_14 = (byte)((ulonglong)dVar2 >> 0x20);
        uStack_13 = (undefined1)((ulonglong)dVar2 >> 0x28);
        uStack_12 = (ushort)((ulonglong)dVar2 >> 0x30);
      }
      else {
        uStack_12 = uStack_12 & 0xf | 0x10;
        if (local_c < -0x3fd) {
          local_c = -0x3fd - local_c;
          do {
            if (((local_18 & 1) != 0) && (!bVar6)) {
              bVar6 = bVar3;
            }
            local_18 = local_18 >> 1;
            if ((bStack_14 & 1) != 0) {
              local_18 = local_18 | 0x80000000;
            }
            uVar5 = CONCAT22(uStack_12,CONCAT11(uStack_13,bStack_14)) >> 1;
            bStack_14 = (byte)uVar5;
            uStack_13 = (undefined1)(uVar5 >> 8);
            uStack_12 = uStack_12 >> 1;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        if (dVar2 < 0.0) {
          dVar2 = -(double)CONCAT26(uStack_12,CONCAT15(uStack_13,CONCAT14(bStack_14,local_18)));
          goto LAB_005b97ea;
        }
      }
      *param_2 = (double)CONCAT26(uStack_12,CONCAT15(uStack_13,CONCAT14(bStack_14,local_18)));
      bVar3 = bVar6;
    }
    if (bVar3) {
      FUN_005b9d2b(0x10);
    }
    uVar5 = local_8 & 0xfffffffd;
    local_8 = uVar5;
    goto LAB_005b980a;
  }
  FUN_005b9d2b(8);
  uVar5 = param_3 & 0xc00;
  dVar2 = _DAT_009565a0;
  dVar4 = _DAT_009565a0;
  if (uVar5 == 0) {
    dVar1 = *param_2;
joined_r0x005b96ee:
    if (dVar1 <= 0.0) {
      dVar2 = -dVar4;
    }
    *param_2 = dVar2;
  }
  else {
    if (uVar5 == 0x400) {
      dVar1 = *param_2;
      dVar2 = _DAT_009565b0;
      goto joined_r0x005b96ee;
    }
    dVar4 = _DAT_009565b0;
    if (uVar5 == 0x800) {
      dVar1 = *param_2;
      goto joined_r0x005b96ee;
    }
    if (uVar5 == 0xc00) {
      dVar1 = *param_2;
      dVar2 = _DAT_009565b0;
      goto joined_r0x005b96ee;
    }
  }
  uVar5 = param_1 & 0x1e;
LAB_005b980a:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_005b9d2b(0x20);
    uVar5 = uVar5 & 0xffffffef;
  }
  return uVar5 == 0;
}

