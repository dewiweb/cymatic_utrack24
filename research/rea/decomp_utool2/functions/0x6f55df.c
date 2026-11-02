// rea decompile_all
// name: FUN_006f55df
// address: 0x6f55df
// body: available
// range: 0x6f55df-0x6f56ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006f5423) */
/* WARNING: Removing unreachable block (ram,0x006f5649) */
/* WARNING: Removing unreachable block (ram,0x006f5428) */
/* WARNING: Removing unreachable block (ram,0x006f5436) */
/* WARNING: Removing unreachable block (ram,0x006f5440) */
/* WARNING: Removing unreachable block (ram,0x006f544a) */
/* WARNING: Removing unreachable block (ram,0x006f545c) */
/* WARNING: Removing unreachable block (ram,0x006f546f) */
/* WARNING: Removing unreachable block (ram,0x006f547d) */
/* WARNING: Removing unreachable block (ram,0x006f5487) */
/* WARNING: Removing unreachable block (ram,0x006f5497) */

ulonglong FUN_006f55df(void)

{
  int iVar1;
  int extraout_ECX;
  double in_XMM0_Qa;
  ulonglong in_XMM0_Qb;
  double dVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  
  iVar1 = 5;
  dVar2 = 9.223372036854776e+18;
  if (((uint)((ulonglong)in_XMM0_Qa >> 0x20) & 0x7fffffff) < 0x7ff00000) {
    auVar4._0_8_ = ABS(in_XMM0_Qa);
    auVar4._8_8_ = in_XMM0_Qb & 0x7fffffffffffffff;
    if (3.4028235677973366e+38 < auVar4._0_8_) {
      FUN_006f557d();
      FUN_006f557d();
      iVar1 = extraout_ECX;
    }
    if (1.1754943157898259e-38 <= auVar4._0_8_) {
      dVar6 = in_XMM0_Qa;
      if ((iVar1 == 4) && (9.223372036854776e+18 <= in_XMM0_Qa)) {
        dVar6 = in_XMM0_Qa - 9.223372036854776e+18;
      }
      if ((int)((ulonglong)((longlong)dVar6 << 0x23) >> 0x20) != 0) {
        FUN_006f557d();
      }
      if ((dVar2 <= in_XMM0_Qa) || (in_XMM0_Qa < -9.223372036854776e+18)) goto LAB_006f556b;
    }
    else if (auVar4._0_8_ != 0.0) {
      FUN_006f557d();
      FUN_006f557d();
    }
    uVar3 = 0;
    dVar2 = auVar4._0_8_;
    if (dVar2 != 0.0) {
      auVar5 = auVar4 & ZEXT816(0xfffffffffffff) | ZEXT816(0x10000000000000);
      lVar7 = SUB168(ZEXT416(0x433),0) - ((ulonglong)dVar2 >> 0x34);
      uVar8 = auVar5._0_8_ >> lVar7;
      iVar1 = -(uint)(0x433 < auVar4._4_4_ >> 0x14);
      uVar3 = CONCAT44(iVar1,iVar1);
      uVar3 = ~uVar3 & uVar8 |
              auVar5._0_8_ << ((ulonglong)dVar2 >> 0x34) - SUB168(ZEXT416(0x433),0) & uVar3;
      uVar3 = ~-(ulonglong)(in_XMM0_Qa == dVar2) & -uVar3 |
              uVar3 & -(ulonglong)(in_XMM0_Qa == dVar2);
      if ((0 < (int)lVar7) &&
         (auVar9._0_8_ = uVar8 << lVar7, auVar9._8_8_ = (auVar5._8_8_ >> lVar7) << lVar7,
         SUB164(auVar5 ^ auVar9,0) != 0 || SUB164(auVar5 ^ auVar9,4) != 0)) {
        FUN_006f557d();
      }
    }
    return uVar3;
  }
LAB_006f556b:
  FUN_006f557d();
  return 0x8000000000000000;
}

