// rea decompile_all
// name: FUN_00650200
// address: 0x650200
// body: available
// range: 0x650200-0x6503bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6503a8 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x6503ad to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x6503b4 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x6503bb to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00650200(int param_1)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_11;
  undefined1 local_d;
  undefined1 local_c;
  
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((*(uint *)(in_ECX + 0x28) & 1) == 0) {
    if (param_1 != 0xd) {
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
    *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 1;
    if (*(code **)(in_ECX + 0x10) != (code *)0x0) {
      (**(code **)(in_ECX + 0x10))();
      FUN_006598a0(0xd);
      FUN_00650a40();
      uVar3 = CONCAT31(CONCAT21(CONCAT11(local_18,local_17),local_16),local_15);
      if (0x7fffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00656590();
      }
      uVar2 = (uint)CONCAT21(CONCAT11(local_14,local_13),local_12) * 0x100 + (local_11 & 0xff);
      if (uVar2 < 0x80000000) {
        uVar5 = local_11 >> 8 & 0xff;
        *(char *)(in_ECX + 0x10c) = (char)(local_11 >> 8);
        *(undefined1 *)(in_ECX + 0x108) = local_c;
        *(char *)(in_ECX + 0x10b) = local_11._2_1_;
        *(undefined1 *)(in_ECX + 0x220) = local_d;
        *(uint *)(in_ECX + 0xb4) = uVar3;
        *(uint *)(in_ECX + 0xb8) = uVar2;
        *(undefined1 *)(in_ECX + 0x234) = local_11._3_1_;
        if (local_11._2_1_ == '\x02') {
          *(undefined1 *)(in_ECX + 0x10f) = 3;
        }
        else if (local_11._2_1_ == '\x04') {
          *(undefined1 *)(in_ECX + 0x10f) = 2;
        }
        else if (local_11._2_1_ == '\x06') {
          *(undefined1 *)(in_ECX + 0x10f) = 4;
        }
        else {
          *(undefined1 *)(in_ECX + 0x10f) = 1;
        }
        uVar6 = *(byte *)(in_ECX + 0x10f) * uVar5;
        bVar4 = (byte)uVar6;
        *(byte *)(in_ECX + 0x10e) = bVar4;
        uVar6 = uVar6 & 0xff;
        if (bVar4 < 8) {
          uVar6 = uVar6 * uVar3 + 7 >> 3;
        }
        else {
          uVar6 = (uVar6 >> 3) * uVar3;
        }
        *(uint *)(in_ECX + 0xc4) = uVar6;
        FUN_0064c530(uVar3,uVar2,uVar5,local_11._2_1_,local_c,local_11._3_1_,local_d);
        __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

