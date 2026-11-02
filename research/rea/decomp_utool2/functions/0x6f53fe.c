// rea decompile_all
// name: FUN_006f53fe
// address: 0x6f53fe
// body: available
// range: 0x6f53fe-0x6f557c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006f5428) */
/* WARNING: Removing unreachable block (ram,0x006f5436) */

ulonglong FUN_006f53fe(void)

{
  double dVar1;
  ushort in_FPUControlWord;
  float in_XMM0_Da;
  ulonglong in_XMM0_Qb;
  int iVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  
  if (((0x7f7fffff < (uint)ABS(in_XMM0_Da)) ||
      (dVar1 = (double)in_XMM0_Da, 9.223372036854776e+18 <= dVar1)) ||
     (dVar1 < -9.223372036854776e+18)) {
    FUN_006f557d();
    return 0x8000000000000000;
  }
  auVar4._0_8_ = ABS(dVar1);
  auVar4._8_8_ = in_XMM0_Qb & 0x7fffffffffffffff;
  if (((auVar4._0_8_ <= 1.1754943157898259e-38) && (auVar4._0_8_ != 0.0)) &&
     ((in_FPUControlWord & 0x10) == 0)) {
    FUN_006f557d();
    return 0x8000000000000000;
  }
  uVar3 = 0;
  if (auVar4._0_8_ != 0.0) {
    auVar5 = auVar4 & ZEXT816(0xfffffffffffff) | ZEXT816(0x10000000000000);
    lVar6 = SUB168(ZEXT416(0x433),0) - ((ulonglong)auVar4._0_8_ >> 0x34);
    uVar7 = auVar5._0_8_ >> lVar6;
    iVar2 = -(uint)(0x433 < (uint)((ulonglong)((longlong)dVar1 << 1) >> 0x35));
    uVar3 = CONCAT44(iVar2,iVar2);
    uVar3 = ~uVar3 & uVar7 |
            auVar5._0_8_ << ((ulonglong)auVar4._0_8_ >> 0x34) - SUB168(ZEXT416(0x433),0) & uVar3;
    uVar3 = ~-(ulonglong)(dVar1 == auVar4._0_8_) & -uVar3 |
            uVar3 & -(ulonglong)(dVar1 == auVar4._0_8_);
    if ((0 < (int)lVar6) &&
       (auVar8._0_8_ = uVar7 << lVar6, auVar8._8_8_ = (auVar5._8_8_ >> lVar6) << lVar6,
       SUB164(auVar5 ^ auVar8,0) != 0 || SUB164(auVar5 ^ auVar8,4) != 0)) {
      FUN_006f557d();
    }
  }
  return uVar3;
}

