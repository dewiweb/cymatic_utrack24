// rea decompile_all
// name: FUN_00496c8e
// address: 0x496c8e
// body: available
// range: 0x496c8e-0x496e64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x496cad to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00496c8e(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int unaff_ESI;
  uint unaff_EDI;
  byte local_114;
  byte local_113;
  undefined1 local_110 [256];
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_d;
  byte local_c;
  byte local_b;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  uVar2 = *(uint *)(unaff_ESI + 0x28);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
  if ((uVar2 & 4) == 0) {
    if ((in_ECX == 0) || ((*(byte *)(in_ECX + 8) & 0x10) == 0)) {
      cVar1 = *(char *)(unaff_ESI + 0x10b);
      if (cVar1 == '\0') {
        if (unaff_EDI == 2) {
          FUN_00495a35(&local_114,2);
          *(undefined2 *)(unaff_ESI + 0x104) = 1;
          *(ushort *)(unaff_ESI + 0x174) = (ushort)local_114 * 0x100 + (ushort)local_113;
LAB_00496e09:
          iVar3 = FUN_00495a5d();
          if (iVar3 == 0) {
            FUN_004994d8(local_110,*(undefined2 *)(unaff_ESI + 0x104),unaff_ESI + 0x16c);
          }
          else {
            *(undefined2 *)(unaff_ESI + 0x104) = 0;
          }
          goto LAB_00496e58;
        }
      }
      else if (cVar1 == '\x02') {
        if (unaff_EDI == 6) {
          FUN_00495a35(&local_10);
          *(undefined2 *)(unaff_ESI + 0x104) = 1;
          *(ushort *)(unaff_ESI + 0x16e) = (ushort)local_10 * 0x100 + (ushort)local_f;
          *(ushort *)(unaff_ESI + 0x170) = (ushort)local_e * 0x100 + (ushort)local_d;
          *(ushort *)(unaff_ESI + 0x172) = (ushort)local_c * 0x100 + (ushort)local_b;
          goto LAB_00496e09;
        }
      }
      else {
        if (cVar1 != '\x03') {
          FUN_00495a5d();
          goto LAB_00496e51;
        }
        if ((uVar2 & 2) == 0) goto LAB_00496cb6;
        if (((unaff_EDI <= *(ushort *)(unaff_ESI + 0xfc)) && (unaff_EDI < 0x101)) &&
           (unaff_EDI != 0)) {
          FUN_00495a35(local_110);
          *(short *)(unaff_ESI + 0x104) = (short)unaff_EDI;
          goto LAB_00496e09;
        }
      }
      FUN_00495a5d();
    }
    else {
      FUN_00495a5d();
    }
  }
  else {
LAB_00496cb6:
    FUN_00495a5d();
  }
LAB_00496e51:
  FUN_004914ad();
LAB_00496e58:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

