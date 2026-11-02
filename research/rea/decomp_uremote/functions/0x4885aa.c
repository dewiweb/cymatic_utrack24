// rea decompile_all
// name: FUN_004885aa
// address: 0x4885aa
// body: available
// range: 0x4885aa-0x488680 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004885aa(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  puVar2 = (undefined4 *)param_1[6];
  iVar5 = puVar2[1];
  pbVar6 = (byte *)*puVar2;
  do {
    if (iVar5 == 0) {
      cVar3 = (*(code *)puVar2[3])(param_1);
      if (cVar3 == '\0') {
        return 0;
      }
      pbVar6 = (byte *)*puVar2;
      iVar5 = puVar2[1];
    }
    bVar1 = *pbVar6;
    iVar5 = iVar5 + -1;
    pbVar6 = pbVar6 + 1;
    if (bVar1 == 0xff) {
      do {
        if (iVar5 == 0) {
          cVar3 = (*(code *)puVar2[3])(param_1);
          if (cVar3 == '\0') {
            return 0;
          }
          pbVar6 = (byte *)*puVar2;
          iVar5 = puVar2[1];
        }
        uVar4 = (uint)*pbVar6;
        iVar5 = iVar5 + -1;
        pbVar6 = pbVar6 + 1;
      } while (uVar4 == 0xff);
      if (uVar4 != 0) {
        if (*(int *)(param_1[0x65] + 0x14) != 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x74;
          *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x65] + 0x14);
          *(uint *)(*param_1 + 0x1c) = uVar4;
          (**(code **)(*param_1 + 4))(param_1,0xffffffff);
          *(undefined4 *)(param_1[0x65] + 0x14) = 0;
        }
        param_1[0x5f] = uVar4;
        *puVar2 = pbVar6;
        puVar2[1] = iVar5;
        return 1;
      }
      *(int *)(param_1[0x65] + 0x14) = *(int *)(param_1[0x65] + 0x14) + 2;
    }
    else {
      *(int *)(param_1[0x65] + 0x14) = *(int *)(param_1[0x65] + 0x14) + 1;
    }
    puVar2[1] = iVar5;
    *puVar2 = pbVar6;
  } while( true );
}

