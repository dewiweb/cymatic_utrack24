// rea decompile_all
// name: FUN_006f7ee0
// address: 0x6f7ee0
// body: available
// range: 0x6f7ee0-0x6f80a4 inclusive
// range: 0x6f80c6-0x6f81b5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f7ee0(void)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  ushort in_FPUControlWord;
  double in_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uStack_10;
  ushort uStack_c;
  undefined2 local_a;
  int local_8;
  uint uStack_4;
  
  if (((MXCSR & 0x7f80) != 0x1f80) || ((in_FPUControlWord & 0x7f) != 0x7f)) {
    uStack_c = 0x81aa;
    local_a = 0x6f;
    FUN_006fa237();
    return;
  }
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff;
  if ((0x408f - uVar1 | uVar1 - 0x3c90) < 0x80000000) {
    dVar4 = in_XMM0_Qa * 92.33248261689366 + 6755399441055744.0;
    dVar5 = dVar4 - 6755399441055744.0;
    dVar6 = (in_XMM0_Qa * 92.33248261689366 + 6755399441055744.0) - 6755399441055744.0;
    uVar1 = SUB84(dVar4,0);
    iVar2 = (uVar1 & 0x3f) * 0x10;
    dVar4 = (in_XMM0_Qa - dVar5 * 0.010830424696223417) - dVar5 * 2.572804622327669e-14;
    dVar5 = (in_XMM0_Qa - dVar6 * 0.010830424696223417) - dVar6 * 2.572804622327669e-14;
    if (((int)uVar1 >> 6) + 0x37eU < 0x77d) {
      return;
    }
    uStack_c = (ushort)((*(ulonglong *)(&UNK_00c28fa8 + iVar2) & 0xfffffffffffff) >> 0x30) |
               (ushort)(((ulonglong)(((int)uVar1 >> 7) + 0x3ff) << 0x34) >> 0x30);
    dVar6 = (double)CONCAT26(uStack_c,(int6)(*(ulonglong *)(&UNK_00c28fa8 + iVar2) & 0xfffffffffffff
                                            ));
    dVar4 = (double)((ulonglong)((((int)uVar1 >> 6) - ((int)uVar1 >> 7)) + 0x3ff) << 0x34) *
            (dVar6 + (dVar5 * dVar5 * (dVar5 * 0.16666666669815094 + 0.4999999999995663) +
                     dVar4 + *(double *)(&DAT_00c28fa0 + iVar2) +
                     dVar4 * dVar4 * dVar4 * dVar4 *
                     (dVar4 * 0.008332168270616733 + 0.04166672086872847)) * dVar6);
    if (((ushort)((ulonglong)dVar4 >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)dVar4 & 0x7ff0000000000000) != 0) {
        return;
      }
      uVar3 = 0xf;
    }
    else {
      uVar3 = 0xe;
    }
  }
  else {
    uStack_4 = (uint)((ulonglong)in_XMM0_Qa >> 0x20);
    uVar1 = uStack_4 & 0x7fffffff;
    if (uVar1 < 0x40900000) {
      return;
    }
    if (0x7fefffff < uVar1) {
      local_8 = SUB84(in_XMM0_Qa,0);
      if ((uVar1 < 0x7ff00001) && (local_8 == 0)) {
        if (uStack_4 == 0x7ff00000) {
          return;
        }
        return;
      }
      return;
    }
    if (uStack_4 < 0x80000000) {
      dVar4 = INFINITY;
      uVar3 = 0xe;
    }
    else {
      dVar4 = 0.0;
      uVar3 = 0xf;
    }
  }
  uStack_10 = SUB84(dVar4,0);
  uStack_c = (ushort)((ulonglong)dVar4 >> 0x20);
  local_a = (undefined2)((ulonglong)dVar4 >> 0x30);
  ___libm_error_support(&local_8,(short)&local_8,&uStack_10,uVar3);
  return;
}

