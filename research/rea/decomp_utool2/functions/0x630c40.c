// rea decompile_all
// name: FUN_00630c40
// address: 0x630c40
// body: available
// range: 0x630c40-0x630e32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00630c40(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *in_ECX;
  undefined4 uVar5;
  int iVar6;
  double in_XMM0_Qa;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_0061d5b0(0x2d);
  if (-1 < iVar2) {
    iVar2 = FUN_0061d5b0(0x2d);
    if (-1 < iVar2) {
      iVar2 = FUN_0061d5b0(0);
      if (-1 < iVar2) {
        iVar6 = 0;
        iVar3 = FUN_00426f70();
        if (iVar3 == 0x54) {
          FUN_0044eb90();
          uVar7 = FUN_0061d5b0(0x3a);
          uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
          if ((int)uVar7 < 0) {
LAB_00630d13:
            *(undefined4 *)in_ECX = 0;
            *(undefined4 *)((int)in_ECX + 4) = 0;
            __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc,uVar5,iVar2);
            return;
          }
          uVar7 = FUN_0061d5b0(0x3a);
          uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
          if ((int)uVar7 < 0) goto LAB_00630d13;
          FUN_0045c380();
          iVar6 = (int)(in_XMM0_Qa * 1000.0);
        }
        uVar7 = FUN_00443260();
        iVar3 = (int)((ulonglong)uVar7 >> 0x20);
        iVar4 = (int)uVar7;
        if ((iVar4 == 0x2d) || (iVar4 == 0x2b)) {
          uVar7 = FUN_0061d5b0(0x3a);
          iVar3 = (int)((ulonglong)uVar7 >> 0x20);
          if (-1 < (int)uVar7) {
            iVar3 = FUN_0061d5b0(0);
            if (-1 < iVar3) {
              iVar3 = iVar3 + (int)uVar7 * 0x3c;
              iVar2 = iVar3 * 60000;
              if (iVar4 != 0x2d) {
                iVar2 = iVar3 * -60000;
              }
              iVar6 = iVar6 + iVar2;
              goto LAB_00630dc8;
            }
          }
        }
        else if ((iVar4 == 0) || (iVar4 == 0x5a)) {
LAB_00630dc8:
          uVar7 = FUN_0061da40();
          lVar8 = __allmul(uVar7,1000,0);
          *in_ECX = lVar8 + iVar6;
          __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
          return;
        }
        *(undefined4 *)in_ECX = 0;
        *(undefined4 *)((int)in_ECX + 4) = 0;
        __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc,iVar3,iVar2);
        return;
      }
    }
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)((int)in_ECX + 4) = 0;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

