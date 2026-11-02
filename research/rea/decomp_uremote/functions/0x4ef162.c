// rea decompile_all
// name: FUN_004ef162
// address: 0x4ef162
// body: available
// range: 0x4ef162-0x4ef2b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004ef162(char param_1,char param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *in_ECX;
  
  if (param_1 == '\0') {
    puVar4 = (undefined4 *)in_ECX[0x1e];
    if (puVar4 != (undefined4 *)0x0) {
      in_ECX[0x1e] = 0;
      (**(code **)*puVar4)(1);
    }
    puVar4 = (undefined4 *)in_ECX[0x1f];
    if (puVar4 != (undefined4 *)0x0) {
      in_ECX[0x1f] = 0;
      (**(code **)*puVar4)(1);
    }
  }
  else if (param_2 == '\0') {
    puVar4 = (undefined4 *)in_ECX[0x1e];
    if (puVar4 != (undefined4 *)0x0) {
      in_ECX[0x1e] = 0;
      (**(code **)*puVar4)(1);
    }
    if (in_ECX[0x1f] == 0) {
      iVar3 = FUN_005af82d(0x9c);
      if (iVar3 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)FUN_004d08f9(iVar3,in_ECX[0x36]);
      }
      puVar1 = (undefined4 *)in_ECX[0x1f];
      if ((puVar1 != puVar4) && (in_ECX[0x1f] = (int)puVar4, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      FUN_004c1055(in_ECX[0x1f]);
    }
  }
  else {
    puVar4 = (undefined4 *)in_ECX[0x1f];
    if (puVar4 != (undefined4 *)0x0) {
      in_ECX[0x1f] = 0;
      (**(code **)*puVar4)(1);
    }
    if (in_ECX[0x1e] == 0) {
      iVar3 = FUN_005af82d(0x88);
      if (iVar3 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)FUN_004d0c45(iVar3,in_ECX,in_ECX[0x36]);
      }
      puVar1 = (undefined4 *)in_ECX[0x1e];
      if ((puVar1 != puVar4) && (in_ECX[0x1e] = (int)puVar4, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      FUN_004c1055(in_ECX[0x1e]);
      FUN_004c06f2(1);
    }
  }
  cVar2 = FUN_004efb18();
  if (cVar2 != '\0') {
    FUN_004efc6e();
  }
  if (in_ECX[0x20] == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(in_ECX[0x20] + 8);
  }
  (**(code **)(*in_ECX + 0x8c))(uVar5);
  (**(code **)(*in_ECX + 0x84))();
  return;
}

