// rea decompile_all
// name: FUN_004848cb
// address: 0x4848cb
// body: available
// range: 0x4848cb-0x48493b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004848cb(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = *in_EAX;
  uVar2 = in_EAX[3];
  in_EAX[1] = 0;
  _memset(in_EAX,0,0x1b0);
  *in_EAX = uVar1;
  in_EAX[3] = uVar2;
  *(undefined1 *)(in_EAX + 4) = 1;
  FUN_0048cb55();
  in_EAX[2] = 0;
  in_EAX[6] = 0;
  in_EAX[0x24] = 0;
  in_EAX[0x25] = 0;
  in_EAX[0x26] = 0;
  in_EAX[0x27] = 0;
  puVar3 = in_EAX + 0x2c;
  iVar4 = 4;
  do {
    puVar3[-4] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  in_EAX[0x43] = 0;
  FUN_00488a7f();
  FUN_00486e7e();
  in_EAX[5] = 200;
  return;
}

