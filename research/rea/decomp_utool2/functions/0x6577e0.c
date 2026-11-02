// rea decompile_all
// name: FUN_006577e0
// address: 0x6577e0
// body: available
// range: 0x6577e0-0x657acf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x657acb to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006577e0(int param_1)

{
  uint uVar1;
  int in_ECX;
  undefined1 *in_EDX;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int local_f4;
  uint local_f0;
  uint local_ec;
  int local_e8;
  
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_f0 = 0x10000;
  iVar2 = 0;
  local_ec = 0;
  local_e8 = 0;
  piVar3 = &DAT_00c02410;
  local_f4 = 0;
  do {
    if ((((CONCAT31(CONCAT21(CONCAT11(in_EDX[0x54],in_EDX[0x55]),in_EDX[0x56]),in_EDX[0x57]) ==
           piVar3[-1]) &&
         (CONCAT31(CONCAT21(CONCAT11(in_EDX[0x58],in_EDX[0x59]),in_EDX[0x5a]),in_EDX[0x5b]) ==
          *piVar3)) &&
        (CONCAT31(CONCAT21(CONCAT11(in_EDX[0x5c],in_EDX[0x5d]),in_EDX[0x5e]),in_EDX[0x5f]) ==
         piVar3[1])) &&
       (CONCAT31(CONCAT21(CONCAT11(in_EDX[0x60],in_EDX[0x61]),in_EDX[0x62]),in_EDX[99]) == piVar3[2]
       )) {
      if (iVar2 == 0) {
        iVar2 = CONCAT31(CONCAT21(CONCAT11(*in_EDX,in_EDX[1]),in_EDX[2]),in_EDX[3]);
        local_f0 = CONCAT31(CONCAT21(CONCAT11(in_EDX[0x40],in_EDX[0x41]),in_EDX[0x42]),in_EDX[0x43])
        ;
        local_e8 = iVar2;
      }
      if ((iVar2 == piVar3[-2]) && (local_f0 == *(ushort *)((int)piVar3 + 0xe))) {
        if (param_1 == 0) {
          FUN_0061a0c0(0,iVar2);
          param_1 = FUN_0061a0c0();
        }
        if (param_1 == piVar3[-4]) {
          if (local_f4 == 0) {
            FUN_0061a0a0(0);
            local_f4 = FUN_00619e10(local_e8);
          }
          if (local_f4 == piVar3[-3]) {
            if ((&DAT_00c0241d)[local_ec * 0x20] == '\0') {
              if ((&DAT_00c0241c)[local_ec * 0x20] == '\0') {
                if ((*(uint *)(in_ECX + 0x28) & 0x8000) != 0) {
                  pcVar4 = "out-of-date sRGB profile with no signature";
                  goto LAB_00657a69;
                }
                if ((*(uint *)(in_ECX + 0x2c) & 0x200000) == 0) goto LAB_00657acb;
                FUN_006563b0();
              }
              __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
              return;
            }
            if ((*(uint *)(in_ECX + 0x28) & 0x8000) == 0) {
              if ((*(uint *)(in_ECX + 0x2c) & 0x400000) != 0) {
                FUN_006563b0();
                __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
                return;
              }
            }
            else if ((*(uint *)(in_ECX + 0x2c) & 0x100000) != 0) {
              pcVar4 = "known incorrect sRGB profile";
LAB_00657a69:
              FUN_00656080(pcVar4);
              FUN_006563b0();
              __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto LAB_00657acb;
          }
        }
      }
      iVar2 = local_e8;
      if ((char)piVar3[3] != '\0') {
        if ((*(uint *)(in_ECX + 0x2c) & 0x100000) == 0) {
LAB_00657acb:
                    /* WARNING: Subroutine does not return */
          FUN_00656590();
        }
        if (((*(uint *)(in_ECX + 0x28) & 0x8000) == 0) || (*(int *)(in_ECX + 0xd0) == 0)) {
          FUN_006563b0();
        }
        else {
          FUN_00656020();
        }
      }
    }
    piVar3 = piVar3 + 8;
    local_ec = local_ec + 1;
    if (6 < local_ec) {
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}

