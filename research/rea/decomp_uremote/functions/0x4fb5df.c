// rea decompile_all
// name: FUN_004fb5df
// address: 0x4fb5df
// body: available
// range: 0x4fb5df-0x4fb67e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fb5df(void)

{
  undefined4 *in_EAX;
  short *psVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = 0;
  psVar1 = (short *)((int)in_EAX + 0x200e);
  iVar2 = 0x100;
  do {
    *psVar1 = sVar3 + 1;
    psVar1[-2] = sVar3 + 1;
    psVar1[-3] = sVar3;
    psVar1[1] = sVar3 + 2;
    psVar1[-1] = sVar3 + 2;
    psVar1[2] = sVar3 + 3;
    psVar1 = psVar1 + 6;
    sVar3 = sVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  (**(code **)(in_EAX[0xb02] + 0xc))(2);
  (**(code **)(in_EAX[0xb02] + 4))(0x8893,*in_EAX);
  (**(code **)(in_EAX[0xb02] + 0x10))(0x8893,0xc00,in_EAX + 0x802,0x88e4);
  (**(code **)(in_EAX[0xb02] + 4))(0x8892,in_EAX[1]);
  (**(code **)(in_EAX[0xb02] + 0x10))(0x8892,0x2000,in_EAX + 2,0x88e0);
  return;
}

