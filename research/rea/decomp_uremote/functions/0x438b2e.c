// rea decompile_all
// name: FUN_00438b2e
// address: 0x438b2e
// body: available
// range: 0x438b2e-0x438baa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00438b2e(void)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int in_ECX;
  
  iVar4 = *(int *)(in_ECX + 0x15c);
  uVar1 = *(ushort *)(iVar4 + 0x44);
  iVar5 = *(int *)(iVar4 + 0x40);
  iVar6 = *(int *)(iVar4 + 0x38);
  sVar2 = *(short *)(iVar4 + 0x48);
  sVar3 = *(short *)(iVar4 + 0x46);
  *(undefined4 *)(in_ECX + 0x160) = 9;
  *(undefined4 *)(in_ECX + 0x158) = 2;
  fVar7 = ((float)uVar1 / (float)(iVar5 - iVar6)) * 1.0059625;
  *(float *)(in_ECX + 0x150) = (1.0 / (float)uVar1) * fVar7;
  *(float *)(in_ECX + 0x154) = fVar7 / (float)((int)sVar3 - (int)sVar2);
  return;
}

