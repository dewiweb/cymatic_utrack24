// rea decompile_all
// name: FUN_006f55c1
// address: 0x6f55c1
// body: available
// range: 0x6f55c1-0x6f55cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006f5612) */
/* WARNING: Removing unreachable block (ram,0x006f562e) */
/* WARNING: Removing unreachable block (ram,0x006f5633) */
/* WARNING: Removing unreachable block (ram,0x006f5428) */
/* WARNING: Removing unreachable block (ram,0x006f5436) */
/* WARNING: Removing unreachable block (ram,0x006f5649) */
/* WARNING: Removing unreachable block (ram,0x006f565d) */
/* WARNING: Removing unreachable block (ram,0x006f5692) */
/* WARNING: Removing unreachable block (ram,0x006f569b) */
/* WARNING: Removing unreachable block (ram,0x006f56a9) */
/* WARNING: Removing unreachable block (ram,0x006f56ad) */
/* WARNING: Removing unreachable block (ram,0x006f56c3) */
/* WARNING: Removing unreachable block (ram,0x006f56cd) */
/* WARNING: Removing unreachable block (ram,0x006f56d7) */
/* WARNING: Removing unreachable block (ram,0x006f56e9) */
/* WARNING: Removing unreachable block (ram,0x006f566b) */
/* WARNING: Removing unreachable block (ram,0x006f5679) */
/* WARNING: Removing unreachable block (ram,0x006f546f) */
/* WARNING: Removing unreachable block (ram,0x006f547d) */
/* WARNING: Removing unreachable block (ram,0x006f5487) */
/* WARNING: Removing unreachable block (ram,0x006f5497) */

ulonglong FUN_006f55c1(void)

{
  double in_XMM0_Qa;
  ulonglong in_XMM0_Qb;
  int iVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  
  if (((((uint)((ulonglong)in_XMM0_Qa >> 0x20) & 0x7fffffff) < 0x7ff00000) &&
      (in_XMM0_Qa < 9.223372036854776e+18)) && (-9.223372036854776e+18 <= in_XMM0_Qa)) {
    auVar3._0_8_ = ABS(in_XMM0_Qa);
    auVar3._8_8_ = in_XMM0_Qb & 0x7fffffffffffffff;
    uVar2 = 0;
    if (auVar3._0_8_ != 0.0) {
      auVar4 = auVar3 & ZEXT816(0xfffffffffffff) | ZEXT816(0x10000000000000);
      lVar5 = SUB168(ZEXT416(0x433),0) - ((ulonglong)auVar3._0_8_ >> 0x34);
      uVar6 = auVar4._0_8_ >> lVar5;
      iVar1 = -(uint)(0x433 < (uint)((ulonglong)auVar3._0_8_ >> 0x34));
      uVar2 = CONCAT44(iVar1,iVar1);
      uVar2 = ~uVar2 & uVar6 |
              auVar4._0_8_ << ((ulonglong)auVar3._0_8_ >> 0x34) - SUB168(ZEXT416(0x433),0) & uVar2;
      uVar2 = ~-(ulonglong)(in_XMM0_Qa == auVar3._0_8_) & -uVar2 |
              uVar2 & -(ulonglong)(in_XMM0_Qa == auVar3._0_8_);
      if ((0 < (int)lVar5) &&
         (auVar7._0_8_ = uVar6 << lVar5, auVar7._8_8_ = (auVar4._8_8_ >> lVar5) << lVar5,
         SUB164(auVar4 ^ auVar7,0) != 0 || SUB164(auVar4 ^ auVar7,4) != 0)) {
        FUN_006f557d();
      }
    }
    return uVar2;
  }
  FUN_006f557d();
  return 0x8000000000000000;
}

