// rea decompile_all
// name: FUN_004139d4
// address: 0x4139d4
// body: available
// range: 0x4139d4-0x413a76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004139d4(int param_1,int param_2,short *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_4 + 0x3f4) - *(int *)(param_4 + 0x3f0) * param_1;
  if (-1 < *(int *)(param_4 + 0x3f0)) {
    iVar4 = iVar4 + (*(int *)(param_4 + 1000) + -1) * *(int *)(param_4 + 0x3f0);
  }
  do {
    if (param_2 < 1) {
      return;
    }
    bVar1 = *(byte *)(param_3 + 2);
    if (bVar1 != 0) {
      uVar2 = param_3[1];
      if (uVar2 < 8) {
        pbVar3 = (byte *)(*param_3 + iVar4);
        if (uVar2 != 1) {
          if (uVar2 != 2) {
            if (uVar2 != 3) {
              if (uVar2 != 4) {
                if (uVar2 != 5) {
                  if (uVar2 != 6) {
                    if (uVar2 != 7) goto LAB_00413a67;
                    *pbVar3 = bVar1;
                    pbVar3 = pbVar3 + 1;
                  }
                  *pbVar3 = bVar1;
                  pbVar3 = pbVar3 + 1;
                }
                *pbVar3 = bVar1;
                pbVar3 = pbVar3 + 1;
              }
              *pbVar3 = bVar1;
              pbVar3 = pbVar3 + 1;
            }
            *pbVar3 = bVar1;
            pbVar3 = pbVar3 + 1;
          }
          *pbVar3 = bVar1;
          pbVar3 = pbVar3 + 1;
        }
        *pbVar3 = bVar1;
      }
      else {
        _memset((void *)(*param_3 + iVar4),(uint)bVar1,(uint)uVar2);
      }
    }
LAB_00413a67:
    param_2 = param_2 + -1;
    param_3 = param_3 + 3;
  } while( true );
}

