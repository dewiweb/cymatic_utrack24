// rea decompile_all
// name: FUN_00657f50
// address: 0x657f50
// body: available
// range: 0x657f50-0x6580c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6580bd to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00657f50(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  undefined4 *in_EDX;
  undefined *puVar4;
  char *pcVar5;
  
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar1 = *(ushort *)((int)in_EDX + 0x4a);
  if ((short)uVar1 < 0) {
LAB_00657fad:
    __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_1 < 4) {
    if (((uVar1 & 4) == 0) || (*(ushort *)(in_EDX + 0x12) == param_1)) {
      if ((uVar1 & 0x20) != 0) {
        FUN_006561c0();
        goto LAB_00657fad;
      }
      if (((uVar1 & 2) != 0) && (iVar3 = FUN_00658600(100), iVar3 == 0)) {
        if ((*(uint *)(in_ECX + 0x28) & 0x8000) == 0) {
          if ((*(uint *)(in_ECX + 0x2c) & 0x400000) == 0) goto LAB_006580bd;
        }
        else {
          if ((*(uint *)(in_ECX + 0x2c) & 0x100000) == 0) {
LAB_006580bd:
                    /* WARNING: Subroutine does not return */
            FUN_00656590();
          }
          FUN_00656080("cHRM chunk does not match sRGB");
        }
        FUN_006563b0();
      }
      FUN_00658e00(0xb18f,2);
      *(short *)(in_EDX + 0x12) = (short)param_1;
      in_EDX[1] = 64000;
      in_EDX[2] = 33000;
      in_EDX[3] = 30000;
      in_EDX[4] = 60000;
      *in_EDX = 0xb18f;
      in_EDX[5] = 15000;
      in_EDX[6] = 6000;
      in_EDX[7] = 0x7a26;
      in_EDX[8] = 0x8084;
      in_EDX[9] = 0xa117;
      in_EDX[10] = 0x5310;
      in_EDX[0xb] = 0x78d;
      in_EDX[0xc] = 0x8bae;
      in_EDX[0xd] = 0x1175d;
      in_EDX[0xe] = 0x2e8f;
      in_EDX[0xf] = 0x4680;
      in_EDX[0x10] = 0x1c33;
      in_EDX[0x11] = 0x1734d;
      *(ushort *)((int)in_EDX + 0x4a) = *(ushort *)((int)in_EDX + 0x4a) | 0xe7;
      __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
      return;
    }
    pcVar5 = "inconsistent rendering intents";
    puVar4 = &DAT_00c02f78;
  }
  else {
    pcVar5 = "invalid sRGB rendering intent";
    puVar4 = &DAT_00c02f24;
  }
  FUN_006580d0(puVar4,param_1,pcVar5);
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

