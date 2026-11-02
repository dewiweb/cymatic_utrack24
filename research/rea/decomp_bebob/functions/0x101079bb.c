// rea decompile_all
// name: __handle_exc
// address: 0x101079bb
// body: available
// range: 0x101079bb-0x10107b9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __handle_exc
   
   Library: Visual Studio 2010 Release */

bool __cdecl __handle_exc(uint param_1,double *param_2,uint param_3)

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
    FUN_10107f61();
    uVar5 = param_1 & 0x17;
    goto LAB_10107b7d;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_10107f61();
    uVar5 = param_1 & 0x1b;
    goto LAB_10107b7d;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) == 0) || ((param_3 & 0x10) == 0)) goto LAB_10107b7d;
    bVar6 = (param_1 & 0x10) != 0;
    if (*param_2 != 0.0) {
      fVar7 = (float10)FUN_10107e52(SUB84(*param_2,0),(uint)((ulonglong)*param_2 >> 0x20),&local_c);
      dVar2 = (double)fVar7;
      local_18 = SUB84(dVar2,0);
      bStack_14 = (byte)((ulonglong)dVar2 >> 0x20);
      uStack_13 = (undefined1)((ulonglong)dVar2 >> 0x28);
      uStack_12 = (ushort)((ulonglong)dVar2 >> 0x30);
      local_c = local_c + -0x600;
      if (local_c < -0x432) {
        dVar2 = dVar2 * 0.0;
        bVar6 = bVar3;
LAB_10107b5d:
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
          goto LAB_10107b5d;
        }
      }
      *param_2 = (double)CONCAT26(uStack_12,CONCAT15(uStack_13,CONCAT14(bStack_14,local_18)));
      bVar3 = bVar6;
    }
    if (bVar3) {
      FUN_10107f61();
    }
    uVar5 = local_8 & 0xfffffffd;
    local_8 = uVar5;
    goto LAB_10107b7d;
  }
  FUN_10107f61();
  uVar5 = param_3 & 0xc00;
  dVar2 = _DAT_10164278;
  dVar4 = _DAT_10164278;
  if (uVar5 == 0) {
    dVar1 = *param_2;
joined_r0x10107a5f:
    if (dVar1 <= 0.0) {
      dVar2 = -dVar4;
    }
    *param_2 = dVar2;
  }
  else {
    if (uVar5 == 0x400) {
      dVar1 = *param_2;
      dVar2 = _DAT_10164288;
      goto joined_r0x10107a5f;
    }
    dVar4 = _DAT_10164288;
    if (uVar5 == 0x800) {
      dVar1 = *param_2;
      goto joined_r0x10107a5f;
    }
    if (uVar5 == 0xc00) {
      dVar1 = *param_2;
      dVar2 = _DAT_10164288;
      goto joined_r0x10107a5f;
    }
  }
  uVar5 = param_1 & 0x1e;
LAB_10107b7d:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_10107f61();
    uVar5 = uVar5 & 0xffffffef;
  }
  return uVar5 == 0;
}

