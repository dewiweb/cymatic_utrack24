// rea decompile_all
// name: FUN_10106de8
// address: 0x10106de8
// body: available
// range: 0x10106de8-0x10106ded inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_10106de8(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined2 uStack_c;
  undefined6 uStack_a;
  undefined2 uStack_4;
  
  dVar4 = (double)CONCAT44(param_2,param_1);
  uVar1 = param_2 >> 0x10 & 0x7fff;
  if ((0x408f - uVar1 | uVar1 - 0x3c90) < 0x80000000) {
    dVar5 = dVar4 * 92.33248261689366 + 6755399441055744.0;
    dVar6 = (dVar4 * 92.33248261689366 + 6755399441055744.0) - 6755399441055744.0;
    uVar1 = SUB84(dVar5,0);
    iVar2 = (uVar1 & 0x3f) * 0x10;
    dVar3 = (dVar4 - (dVar5 - 6755399441055744.0) * 0.010830424696223417) -
            (dVar5 - 6755399441055744.0) * 2.572804622327669e-14;
    dVar4 = (dVar4 - dVar6 * 0.010830424696223417) - dVar6 * 2.572804622327669e-14;
    dVar5 = (double)(*(ulonglong *)(&UNK_10142f68 + iVar2) |
                    ((ulonglong)dVar5 & 0xffffffc0) + 0xffc0 << 0x2e);
    dVar4 = dVar4 * dVar4 * (dVar4 * 0.16666666669815094 + 0.4999999999995663) +
            dVar3 + *(double *)(&DAT_10142f60 + iVar2) +
            dVar3 * dVar3 * dVar3 * dVar3 * (dVar3 * 0.008332168270616733 + 0.04166672086872847);
    if (((int)uVar1 >> 6) + 0x37eU < 0x77d) {
      return (float10)(dVar4 * dVar5 + dVar5);
    }
    dVar3 = (double)(*(ulonglong *)(&UNK_10142f68 + iVar2) & 0xfffffffffffff |
                    (ulonglong)(((int)uVar1 >> 7) + 0x3ff) << 0x34);
    uStack_4 = (undefined2)((ulonglong)dVar3 >> 0x30);
    dVar4 = (double)((ulonglong)((((int)uVar1 >> 6) - ((int)uVar1 >> 7)) + 0x3ff) << 0x34) *
            (dVar3 + dVar4 * dVar3);
    if (((ushort)((ulonglong)dVar4 >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)dVar4 & 0x7ff0000000000000) != 0) goto LAB_10106fe2;
      iVar2 = 0xf;
    }
    else {
      iVar2 = 0xe;
    }
  }
  else {
    uVar1 = param_2 & 0x7fffffff;
    if (uVar1 < 0x40900000) {
      return (float10)((double)CONCAT44(param_2,param_1) + 1.0);
    }
    if (uVar1 < 0x7ff00000) {
      if (param_2 < 0x80000000) {
        dVar4 = INFINITY;
        iVar2 = 0xe;
      }
      else {
        dVar4 = 0.0;
        iVar2 = 0xf;
      }
    }
    else {
      if ((uVar1 < 0x7ff00001) && (param_1 == 0)) {
        if (param_2 != 0x7ff00000) {
          return (float10)0.0;
        }
        return (float10)INFINITY;
      }
      iVar2 = 0x3ea;
    }
  }
  uStack_c = SUB82(dVar4,0);
  uStack_a = (undefined6)((ulonglong)dVar4 >> 0x10);
  ___libm_error_support((double *)&param_1,(undefined8 *)&param_1,(double *)&uStack_c,iVar2);
  dVar4 = (double)CONCAT62(uStack_a,uStack_c);
LAB_10106fe2:
  return (float10)dVar4;
}

